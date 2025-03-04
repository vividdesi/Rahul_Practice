#include<stdio.h>
int main()
{
	int natural_number=0;
	printf("Enter the Natural number u want get the sum\n");
	scanf("%d",&natural_number);
	int sum=0;
	for(int i=0;i<=natural_number;i++)sum+=i;
	printf("The sum of natural number of %d is %d\n",natural_number,sum);
	return 0;
}
