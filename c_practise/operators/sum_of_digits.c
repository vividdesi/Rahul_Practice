#include<stdio.h>
int main()
{
	int number=0;
	printf("Enter the number\n");
	scanf("%d",&number);
	int sum=0,rem=0;
	while(number>0)
	{
		rem=number%10;
		sum+=rem;
		number/=10;
	}
	printf("The sum of given number is %d\n",sum);
	return 0;
}
