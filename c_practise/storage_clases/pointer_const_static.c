#include <stdio.h>

void modifyConst() {
    static const int a = 10;
    int *ptr = (int *)&a;  // ⚠️ Unsafe: Removing const
    *ptr = 20;             // ⚠️ Modifying a read-only variable

    printf("Modified a: %d\n", a);  // May not print 20 due to compiler optimizations
}

int main() {
    modifyConst();
    return 0;
}

