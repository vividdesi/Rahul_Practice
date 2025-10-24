#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<stdlib.h>
int global=10;
int main(void)
{
	int stack=20;
	printf("global value is %d\n",global);
	pid_t pid=vfork();
	if(pid == 0)
	{
		printf("This is child process %d\n",getpid());
		global+=10;
		printf("The global value is %d\n",global);
		printf("The stack value is %d\n",stack);
		printf("Modifying the stack value \n");
		stack=stack-10;
		printf("The modified stack value is %d\n",stack);
		exit(0);
	}	

	else
	{
		printf("This is parent %d\n",getpid());
		printf("The global value is %d and stack value is %d\n",global,stack);
		printf("The child pid is %d\n",pid);
	}
	return 0;

}
