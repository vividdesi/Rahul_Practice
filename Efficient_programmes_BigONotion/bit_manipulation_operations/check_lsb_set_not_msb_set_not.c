#include<stdio.h>
#define bits sizeof(short int)*8
int main(void)
{
   unsigned short int n,msb;
	printf("Enter the number\n");
	scanf("%hd",&n);
	msb=(1U<<(bits-1));
	printf("%ld %u\n",bits,msb);
	if(n&1)printf("The lsb is set\n");
	else printf("The lsb is not set\n");
	if(n&(msb))printf("The msb is set\n");
	else printf("The msb is not set\n");
	return 0;
}
//32-bit number 2147483648
//16-bit number 32768
//8-bit number 128
