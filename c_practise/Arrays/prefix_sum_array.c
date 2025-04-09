#include <stdio.h>
#define n 6
int main() {
    int a[n]={1,2,3,4,5,6};
    int i,j;
    for(i=0;i<n;i++)
    {
         for(j=0;j<i;j++)a[i]+=a[j];
            
        }
    
    for(i=0;i<n;i++)printf("%d ",a[i]);
    printf("\n");
    return 0;
}
