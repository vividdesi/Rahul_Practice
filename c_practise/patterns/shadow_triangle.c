#include<stdio.h>
int main()
{
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=10;j++)
		{
			if(1 && 5-i || 6+i && 10)printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}
