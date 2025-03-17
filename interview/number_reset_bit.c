#include<stdio.h>
int main(void)
{
	short int n=0,count=0;
	printf("Enter the number\n");
	scanf("%hd",&n);
	while(n>0)
	{
		n&=(n-1);
		count++;
	}
	printf("The number of set values in given number is %d\n",count);
	printf("The number of reset values in given number is %d\n",16-count);
	return 0;
}


