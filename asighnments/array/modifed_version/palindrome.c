#include<stdio.h>
int main(void)
{
	int i,j;
	int palindrome_one=1;
	int a[]={1,2,3,2,1};
	i=0;
	j=(sizeof(a)/sizeof(a[0]))-1;

	while(i < j)
	{
		if(a[i] != a[j])
		{
			palindrome_one=0;
			break;
		}
		i++,j--;
	}
	if(palindrome_one)printf("Its an palindrome one\n");
	else printf("Its not an palindrome one\n");
	return 0;
}
