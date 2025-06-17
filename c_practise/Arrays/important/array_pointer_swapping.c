#include<stdio.h>
#include<stdlib.h>

void sort_array_pointer(int *a[],int n);
void disp_array_pointer(int **a,int n);

int main(void)
{
    int a=10,b=5,c=8;
    int *arr[3]={&a,&b,&c};
    printf("Before sorting pointers\n");
    disp_array_pointer(arr,3);
    printf("After sorting the pointers\n");
    sort_array_pointer(arr,3);
    disp_array_pointer(arr,3);
    return 0;
}

void sort_array_pointer(int *a[],int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
        if(*a[j] > *a[j+1])
        {
           int *tmp=a[j];
            a[j]=a[j+1];
            a[j+1]=tmp;
        }
        }
    }
}
void disp_array_pointer(int **a,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d\n",*a[i]);
    }
}
