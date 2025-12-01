#include <stdio.h>

void func3() {
    printf("Inside func3\n");

    // Intentional crash (or breakpoint) to examine backtrace
    int *p = NULL;
    *p = 10;     // segmentation fault
}

void func2() {
    printf("Inside func2\n");
    func3();
}

void func1() {
    printf("Inside func1\n");
    func2();
}

int main() {
    printf("Inside main\n");
    func1();
    return 0;
}

