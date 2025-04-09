#include<stdio.h>
int main(void)
{
	int a[4]={2,4,8,16},i=3,j=0;
	while(i)
	{
		j+=a[i];
		i--;
	}
	printf("The sum is %d\n",j);
	return 0;
}
