#include <stdio.h>

int sum_till(int n) {
    int sum = 0;
    for (int i = 1; i <= n; i++)
        sum = sum - i;  // BUG: should be '+'
    return sum;
}

int main() {
    int res = sum_till(5);
    printf("Sum = %d\n", res);
    return 0;
}

