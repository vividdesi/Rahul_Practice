#include<stdio.h>
#include<stdbool.h>
bool isPowerOfFour(int x) {
    return (x > 0) && ((x & (x - 1)) == 0) && ((x & 0x55555555) != 0);
}

int main(void)
{
	int n,count=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	/*while(n)
	{
		if(n&1 != 1)
		count++;
		n>>=1;
	}
	if(count%2==0)printf("THe given number is power of 4\n");
	else printf("The given number is not power of 4\n");*/

	if(isPowerOfFour(n))printf("The given number is power of 4\n");
	else printf("The number is not power of 4\n");
	return 0;
}
