#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(void)
{
	pid_t pid=fork();

	if(pid == 0)
	{
		printf("i am the child process\n");
		printf("the parent process is %d\n",getppid());
		printf("The child process is %d\n",getpid());
		//exit(0);
	}

	else if(pid < 0)
	{
		printf("Fork failed to create the process\n");

	}

	else
	{
		printf("i am the parent  process\n");
		printf("the parent process is %d\n",getppid());
		printf("The child process is %d\n",getpid());
		int status;
	        pid_t cpid= wait(&status);
	        printf("child id is %d and status is %d \n",cpid,WEXITSTATUS(status));
		getchar();
	}		


}
