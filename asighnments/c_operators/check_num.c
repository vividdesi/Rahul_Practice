#include<stdio.h>
int main(void)
{
	int num=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	if(num==0)printf("It is Zero \n");
	else if(num>=1)printf("It is an Positive integer\n");
	else printf("It is an Negative integer\n");
	return 0;
}
