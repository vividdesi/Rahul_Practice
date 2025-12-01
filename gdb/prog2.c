#include <stdio.h>

int main() {
    int *ptr = NULL;
    *ptr = 10;  // Segmentation fault
    return 0;
}

