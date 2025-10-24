#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
//#include<sys/types.h>

int main(void)
{

	pid_t pid1,pid2;
	pid1=fork();
	if(pid1 == 0)
	{
		printf("This is pid1\n");
		exit(1);
	}
	
	pid2=fork();
	if(pid2 == 0)
	{
		printf("This is pid2\n");
		exit(3);
	}

	else
	{
		int status=-1;
		pid_t cpid=-1;

		cpid=waitpid(pid1,&status,0);

		printf("The pid1 update ..\n");
		if(WIFEXITED(status))
		{
			printf("The exit status value is %d\n",WEXITSTATUS(status));

		}
		
		cpid=waitpid(pid2,&status,0);
		
		printf("The pid2 update ..\n");
		if(WIFEXITED(status))
		{
			printf("The exit status value is %d\n",WEXITSTATUS(status));

		}
	}
}
