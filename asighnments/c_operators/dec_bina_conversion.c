#include <stdio.h>

void decimalToBinaryBitwise(int n) {
    printf("Binary equivalent (using bitwise operators): ");
    for (int i = 16; i >= 0; i--) { 
        int bit = (n >> i) & 1;
        printf("%d", bit);
    }
    printf("\n");
}

void decimalToBinaryArithmetic(int n) {
    int binary[32]; 
    int i = 0;

   
    if (n == 0) {
        printf("Binary equivalent (using arithmetic operators): 0\n");
        return;
    }

  
    while (n > 0) {
        binary[i] = n % 2;  // Store the remainder (0 or 1)
        n = n / 2;  // Divide by 2
        i++;
    }

    
    printf("Binary equivalent (using arithmetic operators): ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binary[j]);
    }
    printf("\n");
}

int main() {
    int n;

       printf("Enter a decimal number: ");
       scanf("%d", &n);
       decimalToBinaryBitwise(n);
       decimalToBinaryArithmetic(n);

    return 0;
}

