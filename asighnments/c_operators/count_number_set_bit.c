#include<stdio.h>
void count_set(int);
int main(void)
{	int number=0;
	printf("Enter the number\n");
	scanf("%d",&number);
	count_set(number);
	return 0;
}
void count_set(int a)
{
	int count=0;
	for(int i=7;i>=0;i--)
	{
		if((a&(1<<i))>=1)
		{
			printf("1 ");
			count++;
		}
		else printf("0 ");
	}
	printf("\nThe number of set bits in given binary is %d\n",count);
}
