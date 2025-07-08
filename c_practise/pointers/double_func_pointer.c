#include<stdio.h>
void change_value(int *q)
{
	*q=500;
}

int main(void)
{
	int a=10;
	printf("The a value is %d\n",a);
	int *p=NULL;
	p=&a;
	printf("The a value by pointer p is %d\n",*p);
	change_value(p);
	printf("The a value by pointer p after calling function is %d\n",*p);
	return 0;
}
