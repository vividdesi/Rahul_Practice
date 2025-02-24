#include<stdio.h>
int main()
{
	int number=0,i=0,flag=0;
	printf("Enter the number to check it is prime or not\n");
	scanf("%d",&number);
	if(number<=1)printf("It is not a -Prime number\n");
	
	else
	{
		for(i=1;i<=number;i++)if(number%i==0)flag++;
		
	
	if(flag>2)printf("it is not prime number\n");
	else printf("It is prime number\n");
	}
	return 0;
}
