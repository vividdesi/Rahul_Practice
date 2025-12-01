#include<unistd.h>
#include<stdio.h>
#include <fcntl.h>
int main(void)
{
	int fd;
	fd=open("hello.txt",O_RDONLY);

	if(fd < 0)
	{
		perror("Failed to open the file\n");
		return 1;
	}

	printf("File opened sucessfully\n");

	int n;
	char buf[50];

	while((n=read(fd,buf,sizeof(buf)-1)) >0)
	{
		buf[n]='\0';
		write(1,buf,n);
	}

	printf("The string name is %s\n",buf);

	close(fd);
	return 0;


}
