#include <stdio.h>
#include<stdlib.h>
int main() {
    int n;
    printf("Enter the rows u want to\n");
    scanf("%d",&n);
for(int i=0;i<n;i++)
{
    for(int j=0;j<n-i;j++)
    printf("* ");
    for(int k=0;k<i;k++)printf("    ");
    for(int l=i;l<n;l++)
    printf(" *");
    printf("\n");
}
    return 0;
}
