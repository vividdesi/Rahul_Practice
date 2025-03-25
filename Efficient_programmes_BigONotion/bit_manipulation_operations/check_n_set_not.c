#include<stdio.h>
int main(void)
{
	int n,num;
	printf("Enter the value\n");
	scanf("%d",&num);
	printf("Enter the nth bit\n");
        scanf("%d",&n);
	if(num&(1<<n))printf("The given number n th bit is set to 1\n");
	else printf("The given nth bit is set to 0\n");
	return 0;
}
