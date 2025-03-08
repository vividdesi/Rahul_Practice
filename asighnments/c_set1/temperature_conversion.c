#include <stdio.h>

#define FAHRENHEIT_TO_CELSIUS_CONVERSION 5.0 / 9.0
#define CELSIUS_TO_FAHRENHEIT_CONVERSION 9.0 / 5.0
#define FAHRENHEIT_FREEZING_POINT 32.0

int main() {
    int choice = 0;
    float temp = 0.0;

    // Display options to the user
    printf("Enter your choice:\n");
    printf("1. Fahrenheit to Celsius\n");
    printf("2. Celsius to Fahrenheit\n");
    printf("Choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1: 
            // Fahrenheit to Celsius conversion
            printf("Enter the Fahrenheit value: ");
            if (scanf("%f", &temp) == 1) {
                printf("The Celsius value is %.2f\n", (temp - FAHRENHEIT_FREEZING_POINT) * FAHRENHEIT_TO_CELSIUS_CONVERSION);
            } else {
                printf("Invalid input! Please enter a valid number.\n");
            }
            break;
        
        case 2: 
            // Celsius to Fahrenheit conversion
            printf("Enter the Celsius value: ");
            if (scanf("%f", &temp) == 1) {
                printf("The Fahrenheit value is %.2f\n", (temp * CELSIUS_TO_FAHRENHEIT_CONVERSION) + FAHRENHEIT_FREEZING_POINT);
            } else {
                printf("Invalid input! Please enter a valid number.\n");
            }
            break;
        
        default:
            printf("Invalid choice! Please choose 1 or 2.\n");
    }

    return 0;
}

