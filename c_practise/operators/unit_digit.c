#include<stdio.h>
int main()
{
	int number=0;
	printf("Enter the number to find unit digit\n");
	scanf("%d",&number);
	printf("The unit digit is %d\n",number%10);
	return 0;
}
