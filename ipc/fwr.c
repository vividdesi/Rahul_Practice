#include<stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


int main()
{
	int fd=open("hello",O_WRONLY);
	if(fd < 0)
	{
		printf("Failed to open the fail\n");
	}
	else
	{
		printf("File opened successfully\n");
		char *buf1="hello";
		write(fd,buf1,6);
	}

}
