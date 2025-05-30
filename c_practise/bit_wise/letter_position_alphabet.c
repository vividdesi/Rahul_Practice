#include <stdio.h>
int main() {
    char n='Z';
    if(n>= 'A' && n<='Z')printf("%d\n",((n&(0x1f))));
    else if(n>= 'a' && n<='z')printf("%d\n",((n & 0x1f)));
    else printf("Invalid entry\n");
    return 0;
}
