#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>

#define SIZE 1024

int main(void)
{

	int fd,choice;

	char buffer[SIZE];

	ssize_t n;

	printf("creating an file with permissions\n");
    
	fd=open("output.txt",O_RDWR | O_CREAT | O_TRUNC,0644);

	if(fd < 0)
	{
		perror("failed");
		return 1;
	}

	char *str="Hello  done an mini project\n";

	printf("Writing the data into the file\n");

	n=write(fd,str,29);

	if(n < 0)
	{
		perror("Failed to write in file");
		close(fd);
		return 1;
	}
	
	lseek(fd, 0, SEEK_SET);

	printf("Reading the data from the file\n");
	n=read(fd,buffer,sizeof(buffer)-1);

	if(n <0)
	{
		perror("reading failed");
		close(fd);
		return 1;
	}
	buffer[n]='\0';

	printf("File contents are :%s\n",buffer);

	int fd1=open("destination.txt",O_RDWR | O_CREAT | O_TRUNC,0644);
	


	close(fd);
	return 0;
}
