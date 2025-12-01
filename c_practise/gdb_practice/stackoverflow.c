#include <stdio.h>

void recursive_countdown(int n) {
    printf("n = %d\n", n);
    if (n == -1) return;  // Bug: should stop at 0
    recursive_countdown(n + 1);  // ❌ Infinite recursion
}

int main() {
    recursive_countdown(0);  // Will eventually crash
    return 0;
}

