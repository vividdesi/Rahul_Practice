#include <stdio.h>
#include <dirent.h>
#include <sys/stat.h>
#include <string.h>
#include <stdlib.h>
#include <pwd.h>
#include <grp.h>
#include <time.h>

void print_permissions(mode_t mode) {
    printf( (S_ISDIR(mode)) ? "d" : "-");
    printf( (mode & S_IRUSR) ? "r" : "-");
    printf( (mode & S_IWUSR) ? "w" : "-");
    printf( (mode & S_IXUSR) ? "x" : "-");
    printf( (mode & S_IRGRP) ? "r" : "-");
    printf( (mode & S_IWGRP) ? "w" : "-");
    printf( (mode & S_IXGRP) ? "x" : "-");
    printf( (mode & S_IROTH) ? "r" : "-");
    printf( (mode & S_IWOTH) ? "w" : "-");
    printf( (mode & S_IXOTH) ? "x" : "-");
}

int main(int argc, char *argv[]) {
    struct dirent *entry;
    struct stat file_stat;
    DIR *dir;
    char path[1024];
    char *dirname = (argc > 1) ? argv[1] : ".";

    dir = opendir(dirname);
    if (!dir) {
        perror("uls");
        return 1;
    }

    while ((entry = readdir(dir)) != NULL) {
        snprintf(path, sizeof(path), "%s/%s", dirname, entry->d_name);
        if (stat(path, &file_stat) == -1)
            continue;

        print_permissions(file_stat.st_mode);
        printf(" %lu", file_stat.st_nlink);
        printf(" %s %s", getpwuid(file_stat.st_uid)->pw_name, getgrgid(file_stat.st_gid)->gr_name);
        printf(" %5ld", file_stat.st_size);

        char timebuf[80];
        strftime(timebuf, sizeof(timebuf), "%b %d %H:%M", localtime(&file_stat.st_mtime));
        printf(" %s", timebuf);

        printf(" %s\n", entry->d_name);
    }

    closedir(dir);
    return 0;
}

