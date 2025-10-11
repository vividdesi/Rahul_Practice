#include <stdio.h>
#include <dirent.h>  // For directory operations
#include <stdlib.h>

int main(int argc, char *argv[]) {
    struct dirent *entry;
    DIR *dir;

    // If no argument, list current directory
    char *path = (argc > 1) ? argv[1] : ".";

    dir = opendir(path);
    if (dir == NULL) {
        perror("uls");
        return EXIT_FAILURE;
    }

    while ((entry = readdir(dir)) != NULL) {
        // Skip hidden files (starting with '.')
        if (entry->d_name[0] != '.')
            printf("%s  ", entry->d_name);
    }
    printf("\n");

    closedir(dir);
    return EXIT_SUCCESS;
}

