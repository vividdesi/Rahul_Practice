// Online C compiler to run C program online
#include <stdio.h>

#define size 23

int main() {
    
    int i,j,k;
    for(i=1; i<=size;i++)//rows
    {
        k=1;//value print
        for(j=1; j<=size;j++)
        {
            if(j>=1 && j<= size-i)
            {
                printf("   ");
                //k--;
            }
            
            else
            {
                printf("%3d",k);
                k++;
            }
        }
        printf("\n");
    }

    return 0;
}
