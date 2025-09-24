#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include "MQTTClient.h"

#define ADDRESS     "tcp://<YOUR_MQTT_BROKER_IP>:1883"
#define CLIENTID    "led_subscriber"
#define TOPIC       "base/relay/led1"
#define QOS         1
#define TIMEOUT     10000L

#define GPIO_EXPORT "/sys/class/gpio/export"
#define GPIO_UNEXPORT "/sys/class/gpio/unexport"
#define GPIO_PIN "22"  // Use your actual GPIO number
#define GPIO_DIR "/sys/class/gpio/gpio22/direction"
#define GPIO_VAL "/sys/class/gpio/gpio22/value"

void gpio_setup()
{
    FILE *fp = fopen(GPIO_EXPORT, "w");
    if (fp) {
        fprintf(fp, "%s", GPIO_PIN);
        fclose(fp);
        usleep(100000);
    }

    fp = fopen(GPIO_DIR, "w");
    if (fp) {
        fprintf(fp, "out");
        fclose(fp);
    }
}

void gpio_write(int value)
{
    FILE *fp = fopen(GPIO_VAL, "w");
    if (fp) {
        fprintf(fp, "%d", value);
        fclose(fp);
    }
}

int msgarrvd(void *context, char *topicName, int topicLen, MQTTClient_message *message)
{
    char *payload = message->payload;

    printf("Message arrived on topic %s: %s\n", topicName, payload);

    if (strcmp(payload, "1") == 0) {
        printf("LED ON\n");
        gpio_write(1);
    } else if (strcmp(payload, "0") == 0) {
        printf("LED OFF\n");
        gpio_write(0);
    }

    MQTTClient_freeMessage(&message);
    MQTTClient_free(topicName);
    return 1;
}

int main()
{
    MQTTClient client;
    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;

    gpio_setup();

    MQTTClient_create(&client, ADDRESS, CLIENTID, MQTTCLIENT_PERSISTENCE_NONE, NULL);
    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;

    if (MQTTClient_connect(client, &conn_opts) != MQTTCLIENT_SUCCESS) {
        printf("Failed to connect to broker\n");
        return -1;
    }

    MQTTClient_subscribe(client, TOPIC, QOS);
    MQTTClient_setCallbacks(client, NULL, NULL, msgarrvd, NULL);

    while (1) {
        sleep(1);
    }

    MQTTClient_disconnect(client, 10000);
    MQTTClient_destroy(&client);
    return 0;
}
