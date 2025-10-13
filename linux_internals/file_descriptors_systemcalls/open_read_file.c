#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

#define SIZE 200

int main(void)
{
	int fd=open("test.txt",O_RDONLY);
	char buffer[SIZE];
	ssize_t n;

	if(fd < 0)
	{
		perror("Failed to open");
		return 1;
	}

	n=read(fd,buffer,sizeof(buffer) -1);

	if(n < 0)
	{
		perror("Reading failed");
		close(fd);
		return 1;
	}
	buffer[n]='\0';
	printf("The buffer stored size is %ld\n",n);
	printf("File content are :\n%s\n",buffer);
	close(fd);

	return 0;
}
