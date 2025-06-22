#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(int argc,char *argv[])
{
	char *p=NULL;
	int i,j,count=0;

	for(i=1;i<argc;i++)
	{
		for(j=0;argv[i][j] != '\0';j++)count++;
	}
	printf("The length of string is %d\n",count);
	
	printf("Allocating memory dynamically..\n");
	
	p=malloc((count+1)*sizeof(char));
	
	if(p != NULL)
	{
		printf("Memory Allocation Sucessful :)...\n");
		
		p[0]='\0';

		for(i=1;i<argc;i++)
		{
			strcat(p,argv[i]);
		}
		printf("%s\n",p);
		free(p);
	}
	else
	{
		printf("Memory Allocation Failed :( ...\n");
	}

}
