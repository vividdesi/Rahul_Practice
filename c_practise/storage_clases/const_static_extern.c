#include<stdio.h>
const static int a;
const static int b=12;
const int c;
const int d=12;
int main()
{
	int ac=2,bd=5;
	int *ptr=(int *)&a;
	printf("The value of a is %d and p is %d",a,*ptr);
	//ptr=&a;
	*ptr=10;
	printf("The value of a is %d and p is %d",a,*ptr);
	return 0;
}


