#include<stdio.h>
int main()
{
	int n,i,j,k;
	printf("enter no of rows:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==n||i==1||j==1||j==n)
			{
				printf("* ");
			}else{
				printf("  ");
			}}
		printf("\n");	


	}
}
