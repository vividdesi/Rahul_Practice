#include<stdio.h>
void dec_bin(short int n)
{
        for(int i=16;i>=0;i--)
        {
                if(n&(1<<i))printf("1");
                else printf("0");
        }
        printf("\n");
}

int main(void)
{
	short int n;
	printf("Enter the number \n");
	scanf("%hd",&n);
	dec_bin(n);
	if((n&(1<<5)) && (n&(1<<10)))n|=n^(1<<12);
	else n&=~((1<<5)|(1<<10));
	dec_bin(n);
}


