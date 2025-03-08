#include <stdio.h>

int main() {
    unsigned int input = 0, output = 0;
    unsigned int value1 = 0, value2 = 0;
    int bit1 = 0, bit2 = 0;

    printf("Enter the Input and output hex value:\n");
    scanf("%x %x", &input, &output);
    printf("The output is 0x%x and input is 0x%x\n", output, input);

    printf("Enter value_1 and bit_position1 to swap:\n");
    scanf("%u %d", &value1, &bit1);
    
    printf("Enter value_2 and bit_position2 to swap:\n");
    scanf("%u %d", &value2, &bit2);

    // Compute result by shifting values to respective positions
    unsigned int result = (value1 << bit1) | (value2 << bit2);

    // Create reset mask to clear bits before inserting new values
    unsigned int reset = ~((0xF << bit1) | (0xF << bit2)); 

    // Apply reset and set new values
    input = (input & reset) | result;

    printf("The final value is 0x%x\n", input);

    return 0;
}

