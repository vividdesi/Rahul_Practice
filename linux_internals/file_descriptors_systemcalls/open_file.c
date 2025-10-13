#include<stdio.h>
//printf(),perror()
#include<fcntl.h>
//file control options like O_RDONLY O_WRONLY ,O_RDWR
#include<unistd.h>
//DECLARATIONS FOR POSIX SYSTEM CALLS
//open(),read(),write(),close()

int main()
{
	int fd=open("test.txt",O_RDONLY);
	//calls the open () to pen the file in read-only mode

	if(fd < 0)
	{
		perror("open failed");
		return 1;
	}
	//

	printf("File opened sucessfully FD=%d\n",fd);
	close(fd);
	return 0;
}
