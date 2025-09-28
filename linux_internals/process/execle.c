#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Before execle\n");

    char *myenv[] = {"MYVAR=123", "PATH=/bin:/usr/bin", NULL};

    // Replace process with ls -l, using my custom env
    execle("/bin/ls", "ls", "-l", NULL, myenv);

    perror("execle failed");
    return 1;
}

