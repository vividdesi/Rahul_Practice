#include <stdio.h>

int main() {
    char c = 'o';
    char a[] = "hello world";
    int count = 2;

    // Without a new line after the string:
    printf("The occurrence of char %c in a given string %s is %d", c, a, count);
    
    return 0;
}

