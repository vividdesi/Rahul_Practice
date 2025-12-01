#include <stdio.h>

int main() {
    int value = 0;

    for (int i = 0; i < 10; i++) {
        value += i;
    }

    printf("Value = %d\n", value);
    return 0;
}

