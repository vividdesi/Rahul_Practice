#include <stdio.h>
#include<stdlib.h>
void print(int a[],int n);
void insert(int a[],int n);
void swap_array(int *a, int *b, int n);
int main() {
    int n;
    int *a=NULL,*b=NULL;
    printf("Enter the size to allocate for array\n");
    if((scanf("%d",&n) != 1))
    {
     printf("Invalid input\n");
     return 1;
    }
    if(n<=0)
    {
        printf("Size should be greater than Zero\n");
        return 1;
    }
    a=malloc(n*sizeof(*a));
    if(a != NULL)
    {
        insert(a,n);
        print(a,n);
        b=malloc(n*sizeof(*b));
        if(b != NULL)
        {
            insert(b,n);
            print(b,n);
            printf("Swapping to array values\n");
            swap_array(a, b,n);
            printf("Array of a values are\n");
            print(a,n);
            printf("Array of b values are\n");
            print(b,n);
            free(a);
            free(b);
        }
        else
        {
            printf("Memory allocation failed\n");
            free(a);
        }
    }
    else
    {
     printf("Memory Allocation Failed\n");   
    }
    return 0;
}

void print(int a[],int n)
{
    printf("The entered values are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\n");
}

void insert(int a[],int n)
{
    printf("Enter the values upto %d\n",n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
}

void swap_array(int *a, int *b, int n)
{
    int temp;
 for(int i=0;i<n;i++)
 {
     temp=*(a+i);
     *(a+i)=*(b+i);
     *(b+i)=temp;
 }
}
