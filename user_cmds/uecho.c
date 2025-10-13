#include<stdio.h>

int main(int argc,char *argv[])
{
	int i;
	int start=1;
	int newline=1;

	if( argv[1] == "-n")
	{
		newline=0;
		start=2;
	}
	for(i=start;i<argc;i++)
	{
		printf("%s",argv[i]);
		if(i < argc-1)printf(" ");
	}

	if(newline)printf("\n");
	return 0;
}
