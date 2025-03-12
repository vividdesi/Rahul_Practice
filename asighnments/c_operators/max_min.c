#include<stdio.h>
int main(void)
{
	int a=0,b=0;
	printf("Enter the values \n");
	scanf("%d%d",&a,&b);
	(a>b)?printf("a is greater than b\n"):printf("b is  greater than a\n");
	return 0;
}
