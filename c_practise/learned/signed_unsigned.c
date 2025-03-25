#include<stdio.h>
#include<limits.h>
int main(void)
{
	int a=4000000000;unsigned int b=4000000000;
	printf("a=%d and b=%u\n",a,b);
	printf("a=%d ,b=%u\n",INT_MAX,UINT_MAX);
	printf("The size of long long int is %u\n",sizeof(long long int));printf("The size of  long int is %u\n",sizeof(long int));

	return  0;
}
