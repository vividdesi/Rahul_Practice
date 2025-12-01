#include<stdio.h>
#define SWAP(type,x,y) {type t;t=x,x=y,y=t;}

int main(void)
{
	int a=10,b=15;
	printf("before a value is %d and b is %d\n",a,b);
	SWAP(int,a,b);
	printf("After swapping a value is %d and b is %d\n",a,b);
	return 0;
}

