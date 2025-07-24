#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <string.h>
#include "msg_def.h"

int main() {
    int msgid = msgget(KEY, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget");
        return 1;
    }

    struct msgbuf message;
    message.mtype = 1;

    printf("Enter message to send: ");
    fgets(message.mtext, sizeof(message.mtext), stdin);

    // remove newline
    message.mtext[strcspn(message.mtext, "\n")] = '\0';

    if (msgsnd(msgid, &message, sizeof(message.mtext), 0) == -1) {
        perror("msgsnd");
        return 1;
    }

    printf("Message sent.\n");
    return 0;
}

