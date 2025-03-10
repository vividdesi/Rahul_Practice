#include<stdio.h>
int main(void)
{
	int a=0,b=0,*p=&a,*q=&b;
	printf("Enter the value of a and b\n");
	scanf("%d%d",&a,&b);
	int temp=0;
	temp=*p,*p=*q,*q=temp;
	printf("The after swap are a is %d and b is %d\n",a,b);
	return 0;
}
