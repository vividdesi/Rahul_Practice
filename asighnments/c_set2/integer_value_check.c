#include<stdio.h>
int main()
{
	int number=0;
	printf("Enter the number\n");
	scanf("%d",&number);
	if(number>0)printf("The number %d is positive number\n",number);
	else if(number<0)printf("The number %d is negative number\n",number);
	else printf("The number %d is Zero\n",number);
	return 0;
}
