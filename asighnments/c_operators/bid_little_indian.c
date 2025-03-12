#include<stdio.h>
int main(void)
{
	int n=0;
	printf("Enter the number value as 1\n");
	scanf("%d",&n);
	if(n & 1 )printf("Its is an little Endian\n");
	else printf("Its is an Big Endian\n");
	return 0;
}
