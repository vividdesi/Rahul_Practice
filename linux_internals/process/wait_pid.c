#include<stdio.h>
#include<stdlib.h>
#include<sys/types.h>
#include<sys/wait.h>
#include<unistd.h>


int main(void)
{

	pid_t pid1=-1,pid2=-1;

	pid1=fork();
	if(pid1 < 0)
	{
		printf("pid1 Fork creation failed\n");
		exit(1);
	}

	else if(pid1 == 0)
	{
		printf("This is child -I\n");
		printf("The pid-I is %d\n",getpid());
		printf("The ppid is %d\n",getppid());
		exit(1);
	}

	pid2=fork();

	 if (pid2 < 0)
	{
		printf("Pid2 Fork creation failed\n");
		exit(1);
	}

	else if(pid2 == 0)
	{
		printf("This is child -II\n");
		printf("The pid-II is %d\n",getpid());
		printf("The ppid is %d\n",getppid());
		exit(1);
	}

	else
	{
		printf("This is parent process\n");
		int status1=-1,status2=-1;
		pid_t cid_I=-1,cid_II=-1;
		cid_I=waitpid(pid1,&status1,0);
		cid_II=waitpid(pid2,&status2,0);

		if(WIFEXITED(status1))
		{
			printf("The child-I pid is %d\n",cid_I);
			printf("The exit status value is %d\n",WEXITSTATUS(status1));
		}
		
		if(WIFEXITED(status2))
		{
			printf("The child-II pid is %d\n",cid_II);
			printf("The exit status value is %d\n",WEXITSTATUS(status2));
		}


	}

	return 0;
}
