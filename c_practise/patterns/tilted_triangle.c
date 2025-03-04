#include<stdio.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(j>=1 && j<=i)printf("* ");
			else printf(" ");
		}
		printf("\n");
	}
	for(int i=1;i<=4;i++)
        {
                for(int j=1;j<=4;j++)
                {
                        if(j>=1 && j<=5-i)printf("* ");
                        else printf(" ");
                }
                printf("\n");
        }

	return 0;
}
