#include <stdio.h>
#include<string.h>

int main() {
    char src[]="hello memcpy";
    char dst[20]={0};
    memcpy(dst,src,strlen(src)+1);
    printf("The src string is %s\n",src);
    printf("The dst string is %s\n",dst);
    return 0;
}
