#include<stdio.h>
int main(void)
{
	int a=0,b=0;
	printf("Enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	printf("Before swap a is %d and b is %d\n",a,b); 
	int temp=a;a=b,b=temp;
	printf("After swap a is %d and b is %d\n",a,b); 
	return 0;
}
