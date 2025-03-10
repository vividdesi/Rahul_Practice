#include<stdio.h>
int main(void)
{
	int a=0,b=0;
	printf("Enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	a=a^b;
	b=a^b;
	a=a^b;
	printf("The valyes after swap is a is %d and b is %d\n",a,b);
	return 0;
}
