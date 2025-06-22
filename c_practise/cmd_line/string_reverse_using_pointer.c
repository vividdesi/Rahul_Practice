#include<stdio.h>

void string_reverse(char *s);

int main(int argc,char *argv[])
{
	int i;
	printf("The number of strings are %d\n",argc-1);

	printf("The strings are\n");
	for(i=1;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}

	printf("The Reversing each argument\n");
	for(i=1;i<argc;i++)string_reverse(argv[i]);

	return 0;
}

void string_reverse(char *s)
{
	char *start=NULL,*end=NULL;
	start=s;
	end=start;
	while(*end)end++;
	while(end-- > start)
		putchar(*end);		
	putchar('\n');
}
