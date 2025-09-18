#include <stdio.h>

int main() {
   int a[5]={1,2,3,4,5};
   int *p[5];
   
   int j=4;
   for(int i=0;i<5;i++)
        p[i]=&a[j--];
for(int i=0;i<5;i++) 
   printf("%d ",*p[i]);
   printf("\n");

    return 0;
}
