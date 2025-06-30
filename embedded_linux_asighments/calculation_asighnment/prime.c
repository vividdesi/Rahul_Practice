#include<stdio.h>
#include"headerfile.h"

void prime(int n)
{
	int i, flag = 0;

	if (n <= 1)
       	{
		printf("Invalid input number\n");
		return;
	}

	for (i = 2; i <= n / 2; i++)
       	{
		if (n % i == 0)
	       	{
			flag = 1; // found a divisor
			break;
		}
	}

	if (flag == 0)
		printf("%d is a prime number\n", n);
	else
		printf("%d is not a prime number\n", n);
}
