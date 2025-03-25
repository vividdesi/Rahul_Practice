#include<stdio.h>
int main(void)
{
	short int n;
	printf("Enter the number\n");
	scanf("%hd",&n);
	int count=0;
	while(n)
	{
		n&=(n-1);
		count++;
	}
	printf("THe set bits are are %hd\n",count);
	printf("THe reset bits are %hd\n",16-count);
	return 0;
}
