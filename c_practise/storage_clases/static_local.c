#include<stdio.h>

void fun()
{
	static int a=0;
	int n=0;
	a++,n++;
	printf("a is %d and n is %d\n",a,n);
}

int main()
{
	for(int i=0;i<3;i++)fun();
	return 0;
}
