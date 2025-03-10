#include<stdio.h>
int main(void)
{
	int number=0,rem=0,reverse=0;
	printf("Enter the number\n");
	scanf("%d",&number);
	while(number != 0)
	{
		rem=number%10;
		reverse=reverse*10+rem;
		number/=10;
	}
	printf("The reverse number is %d\n",reverse);
	return 0;
}
