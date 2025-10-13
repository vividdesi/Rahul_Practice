#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    const char *msg = "This line was appended.\n";

    fd = open("output.txt", O_WRONLY | O_APPEND);
    if (fd < 0) {
        perror("open");
        return 1;
    }

    write(fd, msg, 25);
    close(fd);

    printf("Text appended successfully.\n");
    return 0;
}

