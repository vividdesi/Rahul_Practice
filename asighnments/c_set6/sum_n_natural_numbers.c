#include<stdio.h>
int main(void)
{
	int n=0,sum=0;
	printf("Enter the natural number u want to sum \n");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)sum+=i;
	printf("The sum of natural  number is %d\n",sum);
	return 0;
}

