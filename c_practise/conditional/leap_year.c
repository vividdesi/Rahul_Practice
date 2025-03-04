#include<stdio.h>
int main()
{
	int year=0;
	printf("Enter the year u want to check it leap year or not\n");
	scanf("%d",&year);
	if(year%400==0)printf("The %d is leap year\n",year);
	else if(year%100==0)printf("The %d is not a leap year\n",year);
	else if (year %4==0)printf("The %d is leap year\n",year);
	else printf("The %d is not a leap year\n",year);
	return 0;
}
