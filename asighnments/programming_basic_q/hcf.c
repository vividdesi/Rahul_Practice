#include<stdio.h>
int main(void)
{
	int a=0,b=0;
	printf("Enter the a and b values \n");
	scanf("%d%d",&a,&b);
	while(b !=0)
	{
		int temp=b;
		b=a%b;
		a=temp;
	}
	printf("The hcf value is %d\n",a);
	return 0;
}
