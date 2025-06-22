#include<stdio.h>
int main(int argc,char *argv[])
{
	int i=0;
	printf("The count is %d\n",argc);
	printf("The strings are\n");
	for(i=0;i<argc;i++)
	{
		printf("%s\n",argv[i]);
	}
	int count=0,j;
	printf("reversing the string\n");
  	for(i=1;i<argc;i++)
	{
		for(;argv[i][count]!='\0';count++);
		//or we can also use
		// while(argv[i][count] != '\0')count++;
		for(j=count-1;j>=0;j--)putchar(argv[i][j]);
		putchar('\n');
		count=0;
	}
	return 0;
}
//basic string reversing concept
