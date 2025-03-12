#include<stdio.h>
int main(void)
{
	int n=0;
	printf("enter the value\n");
	scanf("%d",&n);
	if(n&1)printf("%d is odd number\n",n);
	else printf("%d is even number\n",n);
	return 0;
}
