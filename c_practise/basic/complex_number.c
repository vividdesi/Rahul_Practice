#include <stdio.h>

// Define a structure for complex numbers
typedef struct {
    int real;
    int imag;
} cmp;

// Function prototypes
cmp add_complex(cmp, cmp);
cmp read_complex();

int main() {
    printf("Enter the first complex number (real and imaginary parts): ");
    cmp a = read_complex();
    
    printf("Enter the second complex number (real and imaginary parts): ");
    cmp b = read_complex();

    cmp sum = add_complex(a, b);

    printf("The sum of the complex numbers is: %d + %di\n", sum.real, sum.imag);

    return 0;
}

// Function to add two complex numbers and return the result
cmp add_complex(cmp a, cmp b) {
    cmp result = { a.real + b.real, a.imag + b.imag };
    return result;
}

// Function to read a complex number from input
cmp read_complex() {
    cmp temp;
    scanf("%d %d", &temp.real, &temp.imag);
    return temp;
}

