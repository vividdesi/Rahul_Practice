#include<stdio.h>
int main(void)
{
	FILE *f;
	f=fopen("test.txt","r");
	if(f == NULL)
	{
		printf("File is not created\n");
	}
	return 0;
}

