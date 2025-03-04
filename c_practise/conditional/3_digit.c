#include<stdio.h>
int main()
{
	int n=0;
	printf("enter the 3 digit number\n");
	scanf("%d",&n);
	if(n%1000>=1)printf("it is an three digit number\n");
	else printf("it is not an three number number\n");
	return 0;
}
