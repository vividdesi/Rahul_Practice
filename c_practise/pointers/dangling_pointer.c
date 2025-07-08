#include<stdio.h>

int *point(void)
{
	int a=10;
	return &a;
}

int main(void)
{
	int *p=point();
	printf("%d\n",*p);
	return 0;
}

