#include<stdio.h>
int main()
{               
  
        for(int i=0;i<=4;i++)
        {
		for(int j=1;j<=10;j++)
                {
                        if(j>=6-i && j<=5+i)printf(" ");
                        else printf("*");
                }

                printf("\n");
        }
        return 0;
} 
