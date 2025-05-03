#include<stdio.h>

int main(void)
{
    int a[5]={1,2,3,4,5},b[5],k;
    printf("Enter the k point u want to rotate\n");
    scanf("%d",&k);
    if(k < 0 || k>=5)
    {
        printf("Invalid input k point\n");
        return 1;
    }
    int i=k,j=0;
    for(;i<5;i++)
    {
        b[j++]=a[i];
    }
    i=0;
    for(i=0;i<k;i++)
    {
        b[j++]=a[i];
    }
    printf("The data after rotating the array via k point\n");
    for(i=0;i<5;i++)printf("%d ",b[i]);
    printf("\n");
}
