#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

#define STACK_SIZE 8192
char child_stack[STACK_SIZE];

int child_fn(void *arg) {
    printf("Child PID=%d, Parent PID=%d\n", getpid(), getppid());
    sleep(10);
    return 0;
}

int main() {
    printf("Main PID=%d, Parent PID=%d\n", getpid(), getppid());
    clone(child_fn, child_stack + STACK_SIZE, CLONE_PARENT | SIGCHLD, NULL);
    sleep(10);
}

