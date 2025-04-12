#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	char a;
	printf("Enter the integer character\n");
	scanf("%c",&a);
	int integer_value=atoi(&a);
	printf("The integer value is %d\n",integer_value);
	return 0;
}
