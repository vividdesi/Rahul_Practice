#include<stdio.h>
void dec_binary(short int);
int main(void)
{
	short int n=0,p1,p2,p3,p4;
	printf("Enter the number\n");
	scanf("%hd",&n);
	printf("Enter the bit positions u want to swap bit position 1 and bit position 2\n");
	scanf("%hd%hd",&p1,&p2);
	printf("Enter the bit positions u want to swap bit position 3 and bit position 4\n");
	scanf("%hd%hd",&p3,&p4);
	printf("Before swapping the number\n");
	dec_binary(n);
	if(((n>>p1)&1)!=((n>>p2)&1))n^=((1<<p1)|(1<<p2));
	if(((n>>p3)&1)!=((n>>p4)&1))n^=((1<<p3)|(1<<p4));
	printf("After swapping the number\n");
	dec_binary(n);
	return 0;
}

void dec_binary(short int n)
{
	for(int i=16;i>=0;i--)
	{
		if(n&(1<<i))printf("1");
		else printf("0");
	}
	printf("\n");
}
