// Online C compiler to run C program online
#include <stdio.h>
void array_pointer_fun(char **disp,int number);
int main() {
    char *arr[3]={"Hello","hi","bye"};
    array_pointer_fun(arr,3);
    return 0;
}
void array_pointer_fun(char **disp,int number)
{
    for(int i=0;i<number;i++)
    {
        printf("%s\n",(disp[i]));
    }
    for(int i=0;i<number;i++)
    printf("0x%X\n",(disp[i]));
    
}
/*
   Hello
   hi
   bye
   0x402004
   0x40200A
   0x40200D

   here it is showing like it is allocated linearly but in many cases diffenrent compleir stores trings in different location in rodata ,so we cannot retain on it */
