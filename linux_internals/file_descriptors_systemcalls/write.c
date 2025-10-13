#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
	int fd;
	const char *msg="hello, Linux system calls!\n";

	fd=open("output.txt",O_WRONLY | O_CREAT | O_TRUNC,0644);

	if(fd < 0)
	{
		perror("open");
		return 1;
	}	

	ssize_t n=write(fd,msg,26);

	if(n < 0)
	{
		perror("Write failed");
		close(fd);
		return 1;
	}

	printf("Wrote %zd bytes to output.txt\n",n);
	close(fd);
	return 0;
}
