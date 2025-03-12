#include<stdio.h>
int main(void)
{
	int n=0,count=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	if(n<=1)
	{
	 printf("It is not an prime number\n");
	 return 0;
	}
	for(int i=2;i*i<n;i++)if(n%i==0)count++;
	if(count<=2)printf("It is an prime number\n");
	else printf("It is not prime number\n");
	return 0;
}
