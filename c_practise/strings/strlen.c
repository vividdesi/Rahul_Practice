#include <stdio.h>
#include <string.h>   // required for strlen()

int main() {
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Length of the string = %zu\n", strlen(str));

    return 0;
}

