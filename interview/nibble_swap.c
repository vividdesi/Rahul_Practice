#include<stdio.h>
void dec_bin(short int);
int main(void)
{
	short int n;
	printf("Enter the number\n");
	scanf("%hd",&n);
	dec_bin(n);
	n=(((n&0xF0)>>4)|((n&0x0F)<<4));
	dec_bin(n);
	return 0;
}

void dec_bin(short int n)
{
	for(int i=7;i>=0;i--)
	{
		if(n&(1<<i))printf("1");
		else printf("0");
	}
	printf("\n");
}

