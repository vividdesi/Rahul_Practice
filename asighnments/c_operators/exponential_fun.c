#include<stdio.h>
int main(void)
{
	int a=0,b=0,i=0;
	printf("Enter the coefficient value\n");
	scanf("%d",&a);
	printf("Enter the base value \n");
	scanf("%d",&b);
	printf("Enter the exponent value u want calculate upto/n");
	scanf("%d",&i);
	for(int j=1;j<=i;j++)
	{
		int n=1;
		for(int	k=0;k<j;k++)n*=b;
		printf("value of %d is %d\n",i,a*n);
		n=0;
	}
	return 0;
}

