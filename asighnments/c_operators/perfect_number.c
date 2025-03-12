#include<stdio.h>
int main(void)
{
	int n=0,p=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	if(n<=0)
	{
		printf("The negative number is not perfect number\n");
		return 0;
	}

	for(int i=1;i<n;i++)
	{
		if(n%i ==0)p+=i;
	}
	if(p == n)printf("The given number  %d is perfect number\n",n);
	else printf("The given number %d is not perfect number\n",n);
	return 0;
}
