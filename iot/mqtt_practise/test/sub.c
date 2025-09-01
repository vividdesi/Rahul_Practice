#include <stdio.h>
#include <stdlib.h>
#include<unistd.h>
#include "MQTTClient.h"

#define ADDRESS     "tcp://localhost:1883"
#define CLIENTID    "CSubscriber"
#define TOPIC       "test/topic"
#define QOS         1
#define TIMEOUT     10000L

volatile int running = 1;

// Callback when a message arrives
int messageArrived(void* context, char* topicName, int topicLen, MQTTClient_message* message) {
    printf("Message arrived on topic %s: %.*s\n", topicName, message->payloadlen, (char*)message->payload);
    MQTTClient_freeMessage(&message);
    MQTTClient_free(topicName);
}

int main(int argc, char* argv[]) {
    MQTTClient client;
    MQTTClient_connectOptions conn_opts = MQTTClient_connectOptions_initializer;
    int rc;

    MQTTClient_create(&client, ADDRESS, CLIENTID, MQTTCLIENT_PERSISTENCE_NONE, NULL);
    conn_opts.keepAliveInterval = 20;
    conn_opts.cleansession = 1;

    if ((rc = MQTTClient_connect(client, &conn_opts)) != MQTTCLIENT_SUCCESS) {
        printf("Failed to connect, return code %d\n", rc);
        exit(EXIT_FAILURE);
    }

    MQTTClient_setCallbacks(client, NULL, NULL, messageArrived, NULL);

    MQTTClient_subscribe(client, TOPIC, QOS);

    printf("Subscribed to topic %s, waiting for messages...\n", TOPIC);

    while (running) {
        // Just loop forever, callbacks will handle messages
        sleep(1);
    }

    MQTTClient_disconnect(client, 10000);
    MQTTClient_destroy(&client);
    return rc;
}

