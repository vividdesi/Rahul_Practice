#include <stdio.h>

int main() {
    // Determine and Print the size of int
    printf("Size of int: %zu bytes\n", sizeof(int));
    printf("Size of long int: %zu bytes\n", sizeof(long int));
    printf("Size of short int: %zu bytes\n", sizeof(short int));

    // Determine and Print the size of float
    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of long double: %zu bytes\n", sizeof(long double));

    // Determine and Print the size of double
    printf("Size of double: %zu bytes\n", sizeof(double));

    // Determine and Print the size of char
    printf("Size of char: %zu bytes\n", sizeof(char));

    return 0;
}

