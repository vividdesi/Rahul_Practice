#include<stdio.h>
int main(void)
{
	int a=0;
	printf("Enter the number\n");
	scanf("%d",&a);
	if(a&1 == 1)printf("Its an odd number\n");
	else printf("Its an even number\n");
	return 0;
}
