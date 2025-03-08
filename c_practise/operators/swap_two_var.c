#include<stdio.h>
int main()
{
	int a=0,b=0;
	printf("Enter the two values \n");
	scanf("%d%d",&a,&b);
	printf("Before swapping a=%d and b=%d\n",a,b);
	int temp;
	temp=a,a=b,b=temp;
	printf("After  swapping a=%d and b=%d\n",a,b);
	return 0;
}

