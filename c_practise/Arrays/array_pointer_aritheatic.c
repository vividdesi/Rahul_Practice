// Online C compiler to run C program online
#include <stdio.h>

void swap_array(int *p,int*q,int n)
{
    printf("swapping the arrays\n");
    
    for(int i=0;i<n;i++)
    {
        int temp=p[i];
        p[i]=q[i];
        q[i]=temp;
    }
}
void display(int *p,int n)
{
     for(int i=0;i<n;i++)
    {
        printf("%d ",*(p++));    
    }
    printf("\n");
}

void reverse_array(int *p,int n)
{
    int i,j;
    for(i=0,j=n-1;i<j;i++,j--)
    {
      int temp=p[i];
      p[i]=p[j];
      p[j]=temp;
    }
}
int main() {
    int a[5]={1,2,3,4,5};
    int b[5];
    
    int *p=NULL,*q=NULL;
    //Method-I
    p=a,q=b;
    for(int i=0;i<5;i++)
    {
        b[i]=*p++ +1 ;    
    }
    printf("Before swapping the a and b values are\n");
    display(a,5);
    display(b,5);  
    swap_array(a,b,5);
    printf("After swapping the a and b values are\n");
    display(a,5);
    display(b,5);  
    printf("Reversing the array\n");
    reverse_array(a,5);
        display(a,5);
reverse_array(b,5);
        display(b,5);
    return 0;
}
