#include<stdio.h>
int main(void)
{
	int year=0;
	printf("Enter the value\n");
	scanf("%d",&year);
	if((year%4==0 && year%100 !=0)|| (year %400==0))printf("It is an leap year\n");
	else printf("It is not an leap year\n");
	return 0;
}
