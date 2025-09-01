#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
int main()
{

	pid_t pid=fork();
	if(pid == 0)
	{
		printf("Killing child process\n");
		exit(0);
	}
	else if(pid > 0)
	{
		printf("Waiting for child exit\n");
		sleep(10);
	}
	else
	{
		printf("process crration failed\n");
	}

	return 0;
}
