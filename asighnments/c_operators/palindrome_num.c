#include<stdio.h>
int reverse(int n);
int main(void)
{
	int n=0;
	printf("Enter the value\n");
	scanf("%d",&n);
	int rev=reverse(n);
	if(n == rev)printf("Given number is palindrome\n");
	else printf("The given number is not palindrome\n");
	return 0;
}

int reverse(int n)
{
	int rev=0;

	while(n>0)
	{
		int rem=n%10;
		rev=rev*10+rem;
		n/=10;
	}
	printf("The reverse number is %d\n",rev);
	return rev;
}
	

