#include<stdio.h>

void swap(int *p,int *q);

int main(void)
{
	int a=10,b=20;
	printf("The value of a is %d and b is %d\n",a,b);
	printf("After swapping the values in variables\n");
	swap(&a,&b);
	printf("The value of a is %d and b is %d\n",a,b);
	return 0;
}

void swap(int *p,int*q)
{
	int temp;
	temp=*p;
	*p=*q;
	*q=temp;
}
