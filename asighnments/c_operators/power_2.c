#include<stdio.h>
void power_2(int);
void power(int);
int main(void)
{
	int num=0;
	printf("Enter the number\n");
	scanf("%d",&num);
	power_2(num);
	power(num);
	return 0;
}
void power_2(int a)
{
	int count=0;
	for(int i=0;i<32;i++)if((a&(1<<i))>=1)count++;
	if(count == 1)printf("Its an power of number\n");
	else printf("Its not an power of two number\n");
}
void power(int a)
{
	if(a<=0)printf("Its not an power of 2 number\n");
	else if((a&(a-1))==0)printf("It is an power of 2 number\n");
	else printf("It is not power of 2 number\n");
}


