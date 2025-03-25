#include<stdio.h>
#define bits sizeof(int)*8
int main(void)
{
	int n,i=-1;
	printf("Enter the number\n");
	scanf("%d",&n);
	int temp=n;
	while(temp)
	{
		temp>>=1;
		i++;
	}
	if(i != -1)printf("The highest set of given number %d is %d\n",n,i);
	else printf("The given number is 0 \n");
	return 0;
}
