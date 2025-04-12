#include<stdio.h>
#include<string.h>
char my_strchr(const char *ptr,int find)
{
	while(*ptr)
	{
		if(*ptr == (char)find)
			return (char *)ptr;
		ptr++;
	}
	return *ptr =='\0' ?(char *)ptr:NULL;
}
int main(void)
{
	char str[]="Hello";
	char ocur;
	ocur=(&str,'H');
	printf("The occurence is %c\n",ocur);
	return 0;
}

