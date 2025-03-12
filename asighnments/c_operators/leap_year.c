#include<stdio.h>
int main(void)
{
	int n=0;
	printf("Enter the year \n");
	scanf("%d",&n);
	if( (n%4==0) && (n%100!=0) || (n%400==0))printf("%d is an Leap year\n",n);
	else printf("%d is not an Leap year\n",n);
	return 0;
}
