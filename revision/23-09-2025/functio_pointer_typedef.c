#include<stdio.h>

typedef int (*operation)(int,int);

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}


int main(void)
{

	operation op=add;

	printf("The addition is %d\n",op(12,13));

	op=sub;

	printf("The subtraction is %d\n",op(15,12));

	return 0;
}

