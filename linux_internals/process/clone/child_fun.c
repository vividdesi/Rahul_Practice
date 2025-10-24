#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<signal.h>
#include<sys/wait.h>
int child_func(void *arg) {
    printf("Child process: PID = %d\n", getpid());
    return 0;
}

int main() {
    char *stack = malloc(1024 * 1024); // allocate 1MB for stack
    if (!stack) {
        perror("malloc");
        exit(1);
    }

    // stack grows down, so pass stack + size
    pid_t pid = clone(child_func, stack + 1024 * 1024, SIGCHLD, NULL);

    if (pid == -1) {
        perror("clone");
        exit(1);
    }

    printf("Parent process: PID = %d, Child PID = %d\n", getpid(), pid);
    waitpid(pid, NULL, 0);
    free(stack);
    return 0;
}

