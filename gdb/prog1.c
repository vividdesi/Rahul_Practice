#include <stdio.h>

int add(int a, int b) {
    
    printf("Entered into the add func\n");
    int c = a + b;
    return c;
}

int main() {
    int x = 5;
    int y = 10;

    int result = add(x, y);
    printf("Result = %d\n", result);

    return 0;
}

