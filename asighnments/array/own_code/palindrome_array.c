#include <stdio.h>

int main() {
    int i=0,j,mid,count=-1;
    int a[]={1,5,9,5,1};
    j=(sizeof(a)/sizeof(a[0]))-1;
    i=0;
    mid=j/2;
    printf("The j %d \n",j);
    while(i <= mid)
    {
        if(a[i] == a[j])
        {
            count ++;
        }
         printf("The i is %d and j is %d \n",i,j);
        j--,i++;
    }
    printf("The count %d and mid %d\n",count,mid);
    if(count == mid)printf("The given array is palindrome\n");
    else printf("The given array is not palindrome\n");

    return 0;
}
