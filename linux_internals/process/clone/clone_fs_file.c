#define _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sched.h>

#define STACK 1024*1024

int clone_fs(void *arg)
{
    printf("Child PID=%d: changing to /tmp and creating file\n", getpid());
    chdir("/tmp");
    FILE *fp = fopen("child_file.txt", "w");
    fprintf(fp, "Hello from child process!\n");
    fclose(fp);
    printf("Child created /tmp/child_file.txt\n");
    return 0;
}

int main(void)
{
//	pid_t pid;
//
	char *stack=malloc(STACK);
	printf ("Parents initial directory\n");
	system("pwd");
//	char *stack=malloc(sizeof(STACK));
	clone(clone_fs,stack + STACK, CLONE_FS |SIGCHLD ,NULL);
//	waitpid(pid,NULL,0);

	printf("parent after child finished\n");
	system("pwd");

	printf("Parent listing /tmp to check file\n");
	system("ls -l /tmp/child_file.txt");

	FILE *fp=fopen("/tmp/child_file.txt","r");

	if(fp)
	{
		char line[64];
		fgets(line, sizeof(line), fp);
		printf("Parent read: %s", line);
		fclose(fp);
	}
       	
	else
       	{
		printf("Parent couldn't open file\n");
	}

	free(stack);

	return 0;


}
