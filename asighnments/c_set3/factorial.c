#include<stdio.h>
int main(void)
{
	int number=0;
	printf("Enter the number\n");
	scanf("%d",&number);
	int fact=1;
	while(number>0)
	{
		fact*=number;
		number--;
	}
	printf("The factorial number is %d\n",fact);;
	return 0;
}
