#include <stdio.h>

extern int globalVar;  // Accessing globalVar from file1.c
void printVar();
int main() {
    printf("Global variable: %d\n", globalVar);  // ✅ Works!
    printVar();
    return 0;
}

