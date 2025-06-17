// Online C compiler to run C program online
#include <stdio.h>
#include"head.h"
 int x=30;//gloabl variable
void fun()
{
     printf("%d\n",x); x=40;
}
int main() {
  int x=10;
    printf("%d\n",x);
    {
	   // extern int x;
        printf("the global -%d\n",x); 
        
    }x=20;
     printf("%d\n",x); 
     fun();
     
     printf("%d\n",x); 
     add();
    return 0;
}
