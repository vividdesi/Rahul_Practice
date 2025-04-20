/*  example-a[6]={1,2,3,4,5,6}--Input
 *          a[6]={2,1,4,3,6,5}--Output*/
#include <stdio.h>
#include<stdlib.h>
void print(int a[],int n);
void insert(int a[],int n);
void swap(int *a,int *b);
void Adjacent(int a[],int n);
int main() {
    int n;
    int *p=NULL;
    printf("Enter the size to allocate for array\n");
    if((scanf("%d",&n) != 1))
    {
     printf("Invalid input\n");
     return 1;
    }
    if(n<=0)
    {
        printf("Size should be greater then Zero\n");
    }
    p=malloc(n*sizeof(*p));
    if(p != NULL)
    {
        insert(p,n);
        print(p,n);
        printf("Converting into Adjacent Array elements\n");
        Adjacent(p,n);
        print(p,n);
        if(p != NULL)free(p);
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

void swap(int *a,int *b)
{
    int temp;
    temp=*(a);
    *(a)=*(b);
    *(b)=temp;
}
void Adjacent(int a[],int n)
{
    for(int i=0;i<n;i=i+2)
    {  
        if(i<n && i+1<n)
        swap(&a[i],&a[i+1]);
    }
}
