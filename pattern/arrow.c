#include<stdio.h>
int main()
{
	int a[5]={7,9,1,9,7},b[5]={7,9,11,9,7};
	for(int i=0;i<5;i++)
	{
		for(int j=0;j<=10;j++)
		{
			if(j>=a[i]&&j<=b[i])printf("*");
			else printf(" ");
		}
		printf("\n");
	}
	return 0;
}

