#include <stdio.h>
#include<stdlib.h>
void print(int *q,int n)
{
    for(int i=0;i<n;i++)printf("%d ",*(q+i));
    printf("\n");
}
void print_odd_index(int *q,int n)
{
    int sum=0;
    printf("The odd index values are\n");
    for(int i=1;i<n;i=i+2)
    {
        printf("%d ",*(q+i));
        sum+=*(q+i);
    }
    printf("\n");
    printf("The sum of odd index values are %d\n",sum);
    
}
void print_Even_index(int *q,int n)
{
    int sum=0;
    printf("The Even index values are\n");
    for(int i=0;i<n;i=i+2)
    {
        printf("%d ",*(q+i));
        sum+=*(q+i);
    }
    printf("\n");
    printf("The sum of even index values are %d\n",sum);
    
}
int main() {
    int n;
    printf("enter the size u want to allocate\n");
    if(scanf("%d",&n) != 1)
    {
        printf("Invalid input\n");
        return 1;
    };
    int *p=NULL;
    p=malloc(n*sizeof(*p));
    if(p != NULL)
    {
        for(int i=0;i<n;i++)
        {
            printf("Enter the value-%d\n",i+1);
            if(scanf("%d",(p+i)) != 1)
            {
                printf("Invalid input\n");
                free(p);
                return 1;
            }
        }
        printf("The values stored are \n");
        print(p,n);
        print_Even_index(p,n);
        print_odd_index(p,n);
        free(p);
    }
    else{
        printf("Memory allocation failed \n");
    }
    return 0;
}
