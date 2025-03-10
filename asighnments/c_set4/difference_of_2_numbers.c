#include<stdio.h>
int main(void)
{
	int a=0,b=0;
	printf("Enter the a and b values\n");
	scanf("%d%d",&a,&b);
	printf("The difference between 2 number is %d\n",(a>b)?a-b:b-a);
	return 0;
}
