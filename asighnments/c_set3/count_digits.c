#include<stdio.h>
int main()
{
	long long int number=0;
	int count=0;
	printf("Enter the number u want count digits\n");
	scanf("%lld",&number);
	if(number ==0)count=1;
	while(number!=0)
	{
		count++;
		number/=10;
	}
	printf("The number of digits is %d\n",count);
	return 0;
}

