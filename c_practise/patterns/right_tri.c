#include<stdio.h>
int main()
{
	char a='A';
	for(int i=1;i<=5;i++)
	{
		for(int j=1;j<=5;j++)
		{
			if(j>=1 && j<=i)printf("%c ",a--);
			else printf(" ");
		}
		a='A';
		a+=i;
		printf("\n");
	}
 return 0;
}
