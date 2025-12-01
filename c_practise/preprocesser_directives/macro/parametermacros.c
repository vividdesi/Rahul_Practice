#include<stdio.h>

#define ADD(X,Y) (X+Y)
#define MULTI(X,Y) (X*Y)
#define SUB(X,Y) (X-Y)

int main(void)
{
	int a=10,b=5;
	printf("The addition value is %d\n",ADD(a,b));
	printf("The subtraction value is %d\n",SUB(a,b));
	printf("The multiplication value is %d\n",MULTI(a,b));
	return 0;
}


