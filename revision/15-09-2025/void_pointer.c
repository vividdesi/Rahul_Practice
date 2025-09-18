// Online C compiler to run C program online
#include <stdio.h>

int main() {
   int a='a';
   void *p=&a;
   printf("The address of int %p\n",((int *)p));
   //*p=30;
   printf("value of int %d\n",*((int *)p));
   
   char b='a';
   p=&b;
 printf("address of char %p\n",((char *)p));
   //*p=30;
   printf("value of char %c\n",*((char *)p));
    return 0;
}
