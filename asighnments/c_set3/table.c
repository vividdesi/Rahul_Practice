#include<stdio.h>
int main(void)
{
	int n=0;
	for(int i=1;i<=10;i++)
	{
		for(int j=1;j<=10;j++)
		{
			printf("%d * %.2d = %.2d   ",j,i,i*j);
		}
		printf("\n");
	}
	printf("\n");
	for(int i=1;i<=10;i++)
        {
                for(int j=11;j<=20;j++)
                {
                        printf("%d * %.2d =%.3d  ",j,i,i*j);
                }
                printf("\n");
        }

	return 0;
}
