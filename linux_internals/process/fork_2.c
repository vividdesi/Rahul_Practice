#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int main(void)
{
	
	pid_t pid1,pid2;

	pid1=fork();

	if(pid1 == 0)
	{
		printf("i am Child 1\n");
		printf("Child 1 id is %d and parent id %d\n",getpid(),getppid());

	}
  
	pid2=fork();

	if (pid2 == 0)
	{
		printf("i am Child 2\n");
		printf("Child 2 id is %d and parent id %d\n",getpid(),getppid());

	}


	else
	{
		printf("i am parent\n");
		printf("parent id is %d and parent id %d\n",getpid(),getppid());

	}
        

}
