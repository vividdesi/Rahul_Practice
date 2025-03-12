#include<stdio.h>
int fact(int n)
{
	int f=1;
	for(int i=1;i<=n;i++)f*=i;
	//printf("The fact value is %d\n",f);
	// int factorials[] = {1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};precomputed values for single digit
	// return factorials[n];
	return f;
};
int main(void)
{
	int n=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	int temp=n,strong=0;
	if(temp<0)
	{
		printf("strong can only be computed for positive int\n");
		return 0;
	}
	while(temp>0)
	{
		int rem=temp%10;
		strong+=fact(rem);
		temp/=10;
	};

	if(n==strong)printf("The given number %d is strong number\n",n);
	else printf("The given number %d is not a strong number\n",n);
	return 0;
}

	

