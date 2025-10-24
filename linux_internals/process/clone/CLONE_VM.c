#define _GNU_SOURCE
#include <sched.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int global = 0;

int child_func(void *arg) {
	printf("Child: PID = %d, global = %d\n", getpid(), global);
	global += 10;
	printf("Child: Updated global = %d\n", global);
	return 0;
}

int main() {
	char *stack = malloc(1024 * 1024);
	if (!stack)
	{ perror("malloc");
		exit(1);
	}

	pid_t pid = clone(child_func, stack + 1024 * 1024, CLONE_VM | SIGCHLD, NULL);

	if (pid == -1)
	{ perror("clone");
		exit(1);
	}

	waitpid(pid, NULL, 0);
	printf("Parent: global = %d\n", global);
	free(stack);
	return 0;
}

