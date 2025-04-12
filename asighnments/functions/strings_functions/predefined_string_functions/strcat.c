#include<stdio.h>
#include<string.h>
#define max 20
int main(void)
{
	char str[max]="hi ",str1[max]=" hello";
	strcat(str,str1);
	printf ("%s\n",str);
	return 0;
}
