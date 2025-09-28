#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/wait.h>

int main() {
    pid_t pid;

    printf("Shell (Parent) started. PID = %d\n", getpid());

    // Fork a child
    pid = fork();

    if (pid < 0) {
        perror("fork failed");
        exit(1);
    }

    if (pid == 0) {
        // Child process
        printf("Child created! PID = %d, Parent PID = %d\n", getpid(), getppid());

        // Replace this process with "ls -l"
        execl("/bin/ls", "ls", "-l", NULL);

        // Only runs if exec fails
        perror("exec failed");
        exit(1);
    } else {
        // Parent process
        int status;
        printf("Parent (Shell) waiting for child (PID = %d)...\n", pid);

        // Wait for child to finish
        waitpid(pid, &status, 0);

        printf("Child finished. Exit status = %d\n", WEXITSTATUS(status));
        printf("Shell (Parent) still alive! PID = %d\n", getpid());
    }

    return 0;
}

