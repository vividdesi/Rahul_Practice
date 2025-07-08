#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main() {
    int fd;
    char buf[100];
    ssize_t bytesRead;

    // Open file using low-level open() (not fopen)
    fd = open("test_files.txt", O_RDONLY);

    if (fd < 0) {
        perror("open");
        return 1;
    }

    printf("File descriptor returned: %d\n", fd);

    // Read from file
    bytesRead = read(fd, buf, sizeof(buf) - 1);
    if (bytesRead < 0) {
        perror("read");
        close(fd);
        return 1;
    }

    // Null-terminate and print content
    buf[bytesRead] = '\0';
    printf("Read data: %s\n", buf);

    // Close file descriptor
    close(fd);

    return 0;
}

