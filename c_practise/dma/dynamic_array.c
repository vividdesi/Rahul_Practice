// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
int main() {
    int *p=NULL;
    int n;
    printf("Enter the size of the array\n");
    if(scanf("%d",&n) != 1)
    {
        printf("Invalid input\n");
        return 1;
    };
    if(n <= 0)
    {
        printf("Invalid size\n");
        return 1;
    }
    p=(int*)malloc(n*sizeof(int));
    if(p !=NULL)
    {
        for(int i=0;i<n;i++)
        {
            printf("Enter the value-%d\n",i+1);
            if(scanf("%d",p+i) != 1)
            {
                printf("Invalid input\n");
                free(p);
                return 1;
            };
        }
        printf("The values stored are\n");
        for(int i=0;i<n;i++)
        { 
            printf("%d ",*(p+i));
        }
        printf("\n");
         free(p);
    }
    else printf("Memory Allocation failed\n");
   
    return 0;
}
