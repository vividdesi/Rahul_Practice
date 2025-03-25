#include<stdio.h>
int main(void)
{
	int sum,n;
	printf("Enter the value to calculate the sum upto the value\n");
	scanf("%d",&n);
	sum=(n*(n+1))/2;
	printf("The sum value is %d\n",sum); 
	return 0;
}
