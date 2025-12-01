#include<stdio.h>
#define SQR(X) (X*X)

int main(void)
{
	printf("The square value is %d\n",SQR(10));
	int a=12;
	printf("The square value is %d\n",SQR(a+10));
	return 0;
}
