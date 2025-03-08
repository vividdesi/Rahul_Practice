#include<stdio.h>
int main()
{
	char a='A';
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=9;j++)
		{
			if(j>=6-i && j<=4+i)
			{
				if(j<=5)printf("%c",++a);
				else printf("%c",--a);
				
			}
			else
			{
				printf(" ");
			}
		}
		a='A';
		printf("\n");
	}
	return 0;
}
				

