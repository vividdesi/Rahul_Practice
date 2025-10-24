#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>

int main(void)
{
	int stack=12;
	printf("The stack value is %d\n",stack);
	pid_t pid=vfork();
	if(pid == 0)
	{
		printf("Modifying the stack value\n");
		stack+=8;

		printf("This is child process %d\n",getpid());
		printf("The child parent process %d\n",getppid());
		execlp("ls","ls",NULL);
		exit(0);
	}	

	else
	{
		printf("This is parent process id %d\n",getpid());
		printf("The child id is %d\n",pid);
		printf("The stack value is %d\n",stack);

	}
	return 0;

}
