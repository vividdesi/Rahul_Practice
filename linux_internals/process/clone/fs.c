#define _GNU_SOURCE
#include <stdio.h>
#include <stdlib.h>
#include <sched.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fcntl.h>

#define STACK_SIZE 8192
char child_stack[STACK_SIZE];

int child_fn(void *arg)
{
    printf("Child PID=%d: changing to /tmp and creating file\n", getpid());
    chdir("/tmp");
    FILE *fp = fopen("child_file.txt", "w");
    fprintf(fp, "Hello from child process!\n");
    fclose(fp);
    printf("Child created /tmp/child_file.txt\n");
    return 0;
}

int main()
{
    printf("Parent initial cwd:\n");
    system("pwd");

    pid_t pid = clone(child_fn, child_stack + STACK_SIZE, CLONE_FS | SIGCHLD, NULL);
    waitpid(pid, NULL, 0);

    printf("\nParent after child finished:\n");
    system("pwd");

    printf("Parent listing /tmp to check file:\n");
    system("ls -l /tmp/child_file.txt");

    FILE *fp = fopen("/tmp/child_file.txt", "r");
    if (fp) {
        char line[64];
        fgets(line, sizeof(line), fp);
        printf("Parent read: %s", line);
        fclose(fp);
    } else {
        printf("Parent couldn't open file\n");
    }

    return 0;
}

