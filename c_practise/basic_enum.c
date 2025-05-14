#include <stdio.h>

// Define an enumeration for traffic light colors
enum TrafficLight {
    RED,    // 0
    YELLOW, // 1
    GREEN   // 2
};

int main() {
    enum TrafficLight light;

    // Set the light to GREEN
    light = GREEN;

    // Use enum in a decision
    if (light == GREEN) {
        printf("Go! Light is GREEN (%d)\n", light);
    } else if (light == YELLOW) {
        printf("Slow down! Light is YELLOW (%d)\n", light);
    } else if (light == RED) {
        printf("Stop! Light is RED (%d)\n", light);
    }

    // Print all values
    printf("\nEnum values:\n");
    printf("RED = %d\n", RED);
    printf("YELLOW = %d\n", YELLOW);
    printf("GREEN = %d\n", GREEN);

    return 0;
}

