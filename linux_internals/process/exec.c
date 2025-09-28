#include <stdio.h>
#include <unistd.h>

int main() {
    printf("Before exec: I am the original program!\n");
    printf("hello world\n");

    // Replace this program with /bin/ls
    execl("/bin/ps", "ps", "-ef", NULL);

    // This line runs only if exec fails
    perror("exec failed");

    return 0;
}

