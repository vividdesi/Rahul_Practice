#include<stdio.h>

// Function to compute GCD using Euclidean algorithm
int gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main(void) {
    int a = 0, b = 0;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    // Compute and print the GCD using the Euclidean algorithm
    int n = gcd(a, b);
    printf("The GCD of %d and %d is %d\n", a, b, n);

    return 0;
}

