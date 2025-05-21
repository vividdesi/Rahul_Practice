#include <stdio.h>

void array_pointer_fun(char **disp, int number);

int main() {
    char *arr[3] = {"Hello", "hi", "bye"};
    array_pointer_fun(arr, 3);
    return 0;
}

void array_pointer_fun(char **disp, int number) {
    for (int i = 0; i < number; i++) {
        printf("%s\n", *(disp + i));  // or disp[i]
    }
}

