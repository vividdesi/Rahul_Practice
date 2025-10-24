#include <arpa/inet.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#define MAX 1024
#define PORT 8080
#define SA struct sockaddr

int main() {
    int sockfd;
    struct sockaddr_in servaddr;
    char buff[MAX];

    setvbuf(stdout, NULL, _IONBF, 0); // <--- important!

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) {
        perror("socket creation failed");
        exit(1);
    }

    servaddr.sin_family = AF_INET;
    servaddr.sin_addr.s_addr = inet_addr("192.168.68.143"); // your server IP
    servaddr.sin_port = htons(PORT);

    if (connect(sockfd, (SA*)&servaddr, sizeof(servaddr)) != 0) {
        perror("connection failed");
        exit(1);
    }

    while (fgets(buff, MAX, stdin)) {
        write(sockfd, buff, strlen(buff));
        bzero(buff, MAX);
        read(sockfd, buff, sizeof(buff));
        printf("%s\n", buff); // now unbuffered output
    }

    close(sockfd);
    return 0;
}

