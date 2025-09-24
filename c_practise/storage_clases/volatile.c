#include <stdio.h>

volatile int flag = 0;

int main() {
    for (int i = 0; i < 5; i++) {
        flag++;
        printf("flag = %d\n", flag);
    }
    return 0;
}

