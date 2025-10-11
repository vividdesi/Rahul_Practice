#include<stdio.h>
//printf()
#include<unistd.h>
//fork(),getpid(),getppid()
#include<sys/wait.h>
//wait(),WIFEXITED,WEXITSTATUS
#include<stdlib.h>
//exit()
#include<sys/types.h>
//pid_t


int main(void)
{
	pid_t pid=-1;

	pid=fork();

	if(pid < 0)
	{
		printf("Fork creation failed\n");
		exit(0);
	}

	else if( pid == 0)
	{
		printf("This is child process pid is %d and ppid is %d\n",getpid(),getppid());

		exit(5);
	}

	else
	{
		int status=-1;
		pid_t cid=-1;

		cid=wait(&status);
		printf("This is parent process pid is %d\n",getpid());
		printf("The child process id is %d\n",cid);
		if (WIFEXITED(status)) {
		    printf("Exit status value is %d\n", WEXITSTATUS(status));
		}

	}

	return 0;
}
