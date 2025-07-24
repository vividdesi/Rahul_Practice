#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

#include <unistd.h>


int main()
{
	int fd=open("hello",O_RDONLY);
	if(fd <0)
	{
		printf("Failed to open the fiel\n");
	}

	else
	{
		printf("File opened succesfully\n");
		char buf2[10];
		read(fd,buf2,6);
		for(int i=0;i<6;i++)
		{
			printf("%c",buf2[i]);
		}
		printf("\n");
	}
}
