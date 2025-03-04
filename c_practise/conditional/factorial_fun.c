#include<stdio.h>
int _fact(int);
int main()
{
	int fact=0;
	printf("Enter the number you want factorial of\n");
	scanf("%d",&fact);
	printf("The factorial of given number %d is %d\n",fact,_fact(fact));
	return 0;
}
int _fact(int fact)
{
	if(fact ==0)return 1;
	else return fact * _fact(fact -1);
}
