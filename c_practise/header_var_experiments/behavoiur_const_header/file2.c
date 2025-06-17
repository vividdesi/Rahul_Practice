#include <stdio.h>
#include "const_in_header.h"

void print_file2() {
    printf("File2: a = %d, address = %p\n", a, (void*)&a);
}

