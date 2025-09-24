#include <stdio.h>
extern int shared;  // declared in another file
void printShared();

int main() {
    printShared();
    shared = 20;
    printShared();
    return 0;
}

