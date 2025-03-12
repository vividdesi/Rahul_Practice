#include<stdio.h>
int main(void)
{
	int n=0;
	printf("Enter the number \n");
	scanf("%d",&n);
	if(n%5==0 && n%11==0)printf("This %d is divisible by 5 and 11\n",n);
	else printf("This %d is not divisible by 5 and 11\n",n);
	return 0;
}
