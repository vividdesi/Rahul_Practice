#include<stdio.h>
#define swap(a,b) a=a^b,b=a^b,a=a^b;
int main(void)
{
	int a=0,b=0;
	printf("Enter the values \n");
	scanf("%d%d",&a,&b);
	printf("Before swapping ais %d and b is %d\n",a,b);
	swap(a,b);
	printf("After swapping ais %d and b is %d\n",a,b);
	return 0;
}

