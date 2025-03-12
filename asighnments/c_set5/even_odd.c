#include<stdio.h>
int main(void)
{
	int number =0;
	printf("Enter the number \n");
       	scanf("%d",&number);
 	if(number%2 == 0)printf("Its an Even number\n");
	else printf("Its an Odd number\n");	
	return 0;
}
