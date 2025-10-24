#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include<sched.h>
#include<sys/wait.h>
#include<unistd.h>



int clone_fs(void *arg)
{
	printf("this is child process\n");
	chdir("/tmp");
	printf("Modified the directory location form child\n");
	return 0;
}

int main(void)
{
	char *stack=malloc(1024 *1024);
	printf("Parent process initial directory\n");
	system("pwd");
	
	clone(clone_fs,stack + 1024 *1024,CLONE_FS|SIGCHLD,NULL);
	sleep(1);
	
	printf("parent after child\n");
	system("pwd");
	
	free(stack);
	stack=NULL;

	int status;
	pid_t cpid;
	cpid=wait(&status);

	if(WIFEXITED(status))
	{
		printf("Child pid is %d\n",cpid);
		printf("The exit status value is %d\n",WEXITSTATUS(status));
	}

	return 0;
}
