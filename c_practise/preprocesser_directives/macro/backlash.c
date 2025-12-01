#include<stdio.h>

#define PRINT(x) \
	while(x != 0)\
	{                                  \
		printf("x value is %d\n",x); \
		x--;    \
	}\


int main(void)
{
	int x=10;
	PRINT(x);
	return 0;
}



