#include<stdio.h>
int main()
{	
	int i=0, j=0;
	for( i=0,j=0;i<=10,j<=10;i++,j++)
	{
	  if(j>=0 && j<=9)printf("*");

		printf("\n");
	}
	return 0;
}
