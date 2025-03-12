#include<stdio.h>
int main(void)
{
	char c='\0';
	printf("Enter the character\n");
	scanf("%c",&c);
	if(c>=65 && c<=90)printf("The given char is Upper case\n");
	else if(c>=97 && c<=122)printf("The given char is lower case\n");
	else printf("The character is special symbol\n");
	return 0;
}
