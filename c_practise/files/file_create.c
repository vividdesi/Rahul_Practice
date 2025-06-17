#include<stdio.h>
int main(void)
{
	FILE *f=NULL;
	f=fopen("test.txt","w");
	if(f == NULL)
	{
		printf("file is not opened\n");
	}

	else
	{
		printf("File created successfully\n");
	}
	return 0;
}
