#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <arpa/inet.h>
#include <pthread.h>

#define PORT 8080
#define MAX 1024

int sockfd;
volatile int running = 1;

void *receive_handler(void *arg) {
    char buffer[MAX];
    while (running) {
        bzero(buffer, MAX);
        int bytes = read(sockfd, buffer, sizeof(buffer));
        if (bytes <= 0) {
            printf("\nServer disconnected.\n");
            running = 0;
            break;
        }

        if (strncmp(buffer, "FILE ", 5) == 0) {
            long filesize;
            char filename[256];
            sscanf(buffer, "FILE %ld %s", &filesize, filename);

            FILE *fp = fopen(filename, "wb");
            if (!fp) { printf("Cannot create file %s\n", filename); continue; }

            long received = 0;
            while (received < filesize) {
                int n = read(sockfd, buffer, sizeof(buffer));
                fwrite(buffer, 1, n, fp);
                received += n;
            }
            fclose(fp);
            printf("\nFile '%s' received!\nYou: ", filename);
            fflush(stdout);
        } else {
            printf("\nServer: %s", buffer);
            printf("You: ");
            fflush(stdout);
        }
    }
    return NULL;
}

void *send_handler(void *arg) {
    char buffer[MAX];
    while (running) {
        printf("You: ");
        bzero(buffer, MAX);
        fgets(buffer, MAX, stdin);

        if (strncmp(buffer, "/sendfile ", 10) == 0) {
            char filename[256];
            sscanf(buffer + 10, "%s", filename);

            FILE *fp = fopen(filename, "rb");
            if (!fp) { printf("File not found\n"); continue; }

            fseek(fp, 0, SEEK_END);
            long filesize = ftell(fp);
            fseek(fp, 0, SEEK_SET);

            char header[512];
            sprintf(header, "FILE %ld %s\n", filesize, filename);
            write(sockfd, header, strlen(header));

            char filebuf[1024];
            size_t n;
            while ((n = fread(filebuf, 1, sizeof(filebuf), fp)) > 0) {
                write(sockfd, filebuf, n);
            }
            fclose(fp);
            printf("File '%s' sent!\n", filename);
            continue;
        }

        write(sockfd, buffer, strlen(buffer));
        if (strncmp(buffer, "exit", 4) == 0) {
            running = 0;
            break;
        }
    }
    return NULL;
}

int main() {
    struct sockaddr_in servaddr;
    char server_ip[20];

    printf("Enter Server IP: ");
    scanf("%s", server_ip);
    getchar(); // consume newline

    sockfd = socket(AF_INET, SOCK_STREAM, 0);
    if (sockfd == -1) { perror("socket"); exit(1); }

    servaddr.sin_family = AF_INET;
    servaddr.sin_port = htons(PORT);
    servaddr.sin_addr.s_addr = inet_addr(server_ip);

    if (connect(sockfd, (struct sockaddr*)&servaddr, sizeof(servaddr)) != 0) { perror("connect"); exit(1); }
    printf("Connected to server!\n");

    pthread_t send_thread, recv_thread;
    pthread_create(&send_thread, NULL, send_handler, NULL);
    pthread_create(&recv_thread, NULL, receive_handler, NULL);

    pthread_join(send_thread, NULL);
    pthread_join(recv_thread, NULL);

    close(sockfd);
    printf("Chat ended.\n");
    return 0;
}

