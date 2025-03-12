#include<stdio.h>
int main(void)
{
	int a=0,b=0;
	printf("Enter the number\n");
	scanf("%d%d",&a,&b);
	printf("Before swapping a is %d and b is %d\n",a,b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swapping a is %d and b is %d\n",a,b);
	return 0;
}
