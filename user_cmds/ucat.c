#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>

#define BUF_SIZE 1024

void cat_file(const char *filename) {
    int fd;
    ssize_t nread;
    char buffer[BUF_SIZE];

    fd = open(filename, O_RDONLY);
    if (fd == -1) {
        perror(filename);
        return;
    }

    while ((nread = read(fd, buffer, BUF_SIZE)) > 0) {
        write(STDOUT_FILENO, buffer, nread);
    }

    close(fd);
}

int main(int argc, char *argv[]) {
    if (argc < 2) {
        fprintf(stderr, "Usage: %s <file1> [file2...]\n", argv[0]);
        return 1;
    }

    for (int i = 1; i < argc; i++) {
        cat_file(argv[i]);
    }

    return 0;
}

