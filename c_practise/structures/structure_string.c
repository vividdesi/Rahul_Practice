#include<stdio.h>
#define n 10
typedef struct string
{
	char name[n];
}s;
int main(void)
{
	s s1,s2;
	printf("Enter the string in s1\n");
	fgets(s1.name,n,stdin);
	printf("Enter the string in s2\n");
	fgets(s2.name,n,stdin);
	printf("the string is entered are\n");
	fputs(s1.name,stdout);
	fputs(s2.name,stdout);
	return 0;
}

