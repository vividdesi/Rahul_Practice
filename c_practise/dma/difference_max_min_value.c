#include<stdio.h>
#include<stdlib.h>

int insert(int *p,int n);
void print(int *p,int n);
int difference_Highest_smallest_value(int *p,int n);

int main(void)
{
    int n,difference;
    int *p=NULL;
    printf("Enter the size to allocate\n");
    if(scanf("%d",&n) != 1)
    {
        printf("Invalid datatype value\n");
        return 1;
    }
    if(n<=0)
    {
        printf("n value should be greater than Zero\n");
        return 1;
    }
    p=(int*)calloc(n,sizeof(int));
    if(p != NULL)
    {
        if( insert(p,n) == 0)
        {
            printf("Invalid value type\n");
            free(p);
            return 1;
        }
        print(p,n);
        printf("The difference between highest and smallest is %d\n",difference_Highest_smallest_value(p,n));
        free(p);
    }
    else
    {
        printf("Memory allocation failed\n");
    }
    return 0;
}
int insert(int *p,int n)
{
    printf("Enter the values upto %d\n",n);
    for(int i=0;i<n;i++)
    {
        if(scanf("%d",&p[i]) != 1)
        {
            return 0;
        }
    }
}

void print(int *p,int n)
{
    printf("Entered values are\n");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\n");
}

int difference_Highest_smallest_value(int *p,int n)
{
    int big_value,small_value=0;
    big_value=*(p+1);
    small_value=*(p+1);
    for(int i=0;i<n;i++)
    {
        if(big_value < p[i])big_value=p[i];
        if(small_value > p[i]) small_value=p[i];
    }
    printf("The smallest value is %d\n",small_value);
    printf("The big value is %d\n",big_value);
    return big_value - small_value;
}
