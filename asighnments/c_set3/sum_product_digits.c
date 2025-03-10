#include<stdio.h>
int main(void)
{
	int number=0,sum=0,product=1,rem=0;
	printf("Enter the number u want sum and product\n");
	scanf("%d",&number);
	while(number != 0)
	{
		rem=number%10;
		sum+=rem;
		product*=rem;
		number/=10;
	}
	printf("The sum is %d and product is %d\n",sum,product);
	return 0;
}
