#include<stdio.h>
int count_digit(int n)
{
	int count=0;
	while(n>0)
	{
		count++;
		n/=10;
	}
	return count;

};
int multi(int rem,int d)
{
	int a=1;
	for(int i=0;i<d;i++)a*=rem;
	return a;
};
int main(void)
{
	int n=0;
	printf("Enter the number\n");
	scanf("%d",&n);
	int digit=count_digit(n);
	int temp=n,arm=0;
	while(temp>0)
	{
	   int rem=temp%10;
	   arm+=multi(rem,digit);
	   temp/=10;
	}
	printf("The armstrong  number is %d\n",arm);
	if(arm == n)printf("It is arm strong number\n");
	else printf("It is not an armstrong number\n");
	return 0;
}
