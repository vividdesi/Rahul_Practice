#include<stdio.h>
int main()
{
	int number=0;
	printf("Enter the number u want to check  whether -/+/0\n");
	scanf("%d",&number);
	if(number>=1)printf("The number %d is Positive integer\n",number);
	else if(number ==0)printf("The number is Zero\n");
	else printf("The Number %d is Negative integer\n",number);
	return 0;
}

