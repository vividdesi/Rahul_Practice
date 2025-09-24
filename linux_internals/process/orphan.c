#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(void)
{
	pid_t pid=fork();

	if(pid ==0)
	{
		printf("I am child \n");
		//sleep(10);
		printf(" child is pid is %d and ppid is %d\n",getpid(),getppid());

		getchar();
	}
	
	else
	{

		printf("I am the parent process\n");
		printf(" parent is pid is %d and ppid is %d\n",getpid(),getppid());
	}

	return 0;
}
