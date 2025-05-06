#include <stdio.h>

unsigned int reverse_bits(unsigned int n) {
    n = ((n >> 1) & 0x55555555) | ((n & 0x55555555) << 1);  // swap odd and even bits
    n = ((n >> 2) & 0x33333333) | ((n & 0x33333333) << 2);  // swap 2-bit pairs
    n = ((n >> 4) & 0x0F0F0F0F) | ((n & 0x0F0F0F0F) << 4);  // swap nibbles
    n = ((n >> 8) & 0x00FF00FF) | ((n & 0x00FF00FF) << 8);  // swap bytes
    n = (n >> 16) | (n << 16);                              // swap 16-bit halves
    return n;
}

void print_binary(unsigned int n) {
    unsigned int mask = 1 << 31;
    while (mask) {
        putchar((n & mask) ? '1' : '0');
        mask >>= 1;
    }
    printf("\n");
}

int main() {
    unsigned int num = 13; // Binary: 00000000000000000000000000001101
    printf("Original: ");
    print_binary(num);

    unsigned int reversed = reverse_bits(num);
    printf("Reversed: ");
    print_binary(reversed); // Expect: 10110000000000000000000000000000

    return 0;
}

