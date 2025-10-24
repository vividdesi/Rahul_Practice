#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include<sys/wait.h>
#include<unistd.h>
#include<signal.h>
#include<sched.h>
int child_fun(void *arg)
{
	printf("This is child process id %d\n",getpid());
	printf("This child parent process id is %d\n",getppid());
	return 6;
}
int main(void)
{

	char *stack=malloc(1024 * 1024);

	if(!stack)
	{
		perror("Memory allocation");
		exit(1);
	}

	pid_t pid=clone(child_fun,stack+1024*1024,SIGCHLD,NULL);

	if(pid == -1)
	{
		perror("Clone failed");
		exit(1);
	}

	int status=-1;

	pid_t cpid=waitpid(pid,&status,0);

	printf("The child process id is %d and exitstatus value is %d\n",cpid,WEXITSTATUS(status));

	return 0;

}
