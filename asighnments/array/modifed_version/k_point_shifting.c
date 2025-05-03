#include<stdio.h>

void shift_array_one(int *p,int n);
void shift_array(int *p,int k,int n);
void print_array(const int *p,int n);

int main(void)
{
    int a[5]={1,2,3,4,5},k;
    printf("Enter the k point to rotate the array\n");
    scanf("%d",&k);
    if(k <0 || k>=5)
    {
        printf("Invalid inputn");
        return 1;
    }
    print_array(a,5);
    shift_array(a,k,5);
    print_array(a,5);
    return 0;
}

void shift_array_one(int *p,int n)
{
    int temp=p[0],i;
    for(i=0 ;i < n-1; i++)
    {
        p[i]=p[i+1];
    }
    p[i]=temp;
}
void shift_array(int *p,int k,int n)
{
    for(int i=0;i < k ;i++)
    {
        shift_array_one(p,n);
        print_array(p,5);
    }
}

void print_array(const int *p,int n)
{
    for(int i=0;i<n;i++)
    {
        printf("%d ",p[i]);
    }
    printf("\n");
}
