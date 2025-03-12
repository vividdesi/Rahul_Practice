#include<stdio.h>
int main()
{
	int principal=0,rate=0,time=0;
	printf("Enter the principal amount ,rate of interest and time values\n");
	scanf("%d%d%d",&principal,&rate,&time);
	printf("The simple interest is %d\n",(principal*rate*time)/100);
	return 0;
}
