#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(void)
{

	printf("Hello world pid %d and ppid %d\n",getpid(),getppid());
	return 0;
}
