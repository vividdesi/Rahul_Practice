#include <stdio.h>
#include "const_in_header.h"

void print_file1() {
    printf("File1: a = %d, address = %p\n", a, (void*)&a);
}

