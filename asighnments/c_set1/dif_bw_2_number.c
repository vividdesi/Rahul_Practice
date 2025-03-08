#include<stdio.h>
int main(void)
{
	unsigned int a=0,b=0;
	printf("Enter the two values \n");
	scanf("%u%u",&a,&b);
	printf("The difference between two numbers are %u\n",(a>b)?a-b:b-a);
	return 0;
}
