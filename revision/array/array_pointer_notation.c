
#include <stdio.h>

int main() {
   int a[5]={1,2,3,4,5};
   int *p=&a[0];
   for(int i=0;i<5;i++)
   {
       printf("The adress of a[%d]= %p %p %p %p\n",i,&p[i],p+i,&a[i],a+i);
       printf("The value of a[%d]= %d %d %d %d\n",i,p[i],*(p+i),a[i],*(a+i));
   }
    return 0;
}
