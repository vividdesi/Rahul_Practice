#include <stdio.h>
#include <limits.h>   // for UINT_MAX

int main(void) {
    // 1. Assign -1 to an unsigned int
    unsigned int a = -1;
    printf("1) Assign -1 to unsigned int: %u\n", a);
    // Why? Because -1 is converted modulo 2^32 → UINT_MAX (4294967295)

    // 2. Add 1 to UINT_MAX
    unsigned int b = UINT_MAX;
    printf("2) UINT_MAX is: %u\n", b);
    b = b + 1;
    printf("   After adding 1: %u\n", b);
    // Why? Unsigned overflow wraps around → becomes 0

    // 3. Subtract 1 from 0U
    unsigned int c = 0U;
    c = c - 1;
    printf("3) 0U - 1 = %u\n", c);
    // Why? Wraps around → becomes UINT_MAX

    // 4. Compare -1 < 1U
    if (-1 < 1U)
        printf("4) -1 < 1U → TRUE\n");
    else
        printf("4) -1 < 1U → FALSE\n");
    // Why? -1 is promoted to unsigned (wraps to 4294967295),
    // so comparison is 4294967295 < 1 → FALSE

    return 0;
}

