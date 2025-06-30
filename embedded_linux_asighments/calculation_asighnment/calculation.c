#include<stdio.h>
#include<stdlib.h>
#include"headerfile.h"

void enter_value(int *p,int *q)
{
	printf("Enter the value of a\n");
	scanf("%d",p);
	printf("Enter the value of b\n");
	scanf("%d",q);
	getchar();
}
int main()
{
	int a,b,choice;
	while(1)
	{
	printf("Enter your choice\n");
	printf("1.Addition 2.Subtraction 3.Multiplication 4.Division 5.Even check\n");
	printf("6.Odd check 7.Prime number check  8.Fibbonacci sequence 9.All 10.Exit\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:enter_value(&a,&b);
		       add(a,b);
		       break;
		case 2:enter_value(&a,&b);
		       sub(a,b);
		       break;
		case 3:enter_value(&a,&b);
		       multi(a,b);
		       break;
		case 4:enter_value(&a,&b);
		       divi(a,b);
		       break;	
		case 5:printf("Enter the number to check even or not\n");
		       scanf("%d",&a);
		       even(a);
		       break;
		case 6:printf("Enter the number to check odd or not\n");
		       scanf("%d",&a);
		       odd(a);
		       break;
		case 7:printf("Enter the number to check prime or not\n");
		       scanf("%d",&a);
		       prime(a);
		       break;
		case 8:printf("Enter the number to print fibonacci sequence upto it\n");
		       scanf("%d",&a);
		       fibo(a);
		       break;
		case 9:enter_value(&a,&b);
		       add(a,b);
		       sub(a,b);
		       multi(a,b);
		       divi(a,b);
		       printf("Enter the number to do all operation even odd prime fibo\n");
		       scanf("%d",&a);
		       even(a);
		       odd(a);
		       prime(a);
		       fibo(a);
		       break;
	      
		case 10:printf("Thank you\n");
		        printf("Exiting\n");
			exit(0);
		default:printf("Invalid input\n");

	}

	}

	return 0;
}
