#include<stdio.h>
void dec_bin(int);
int main(void)
{
	int n=1;
	for(int i=0;i<=7;i++)
	{
		printf("%d\n",n);
		dec_bin(n);
		n=n<<1;
	}
	return 0;
}
void dec_bin(int n)
{
	for(int i=7;i>=0;i--)
	{
		if(n&(1<<i))printf("1");
		else printf("0");
	}
	printf("\n");
}
