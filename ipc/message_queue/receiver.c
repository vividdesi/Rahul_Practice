#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include "msg_def.h"

int main() {
    int msgid = msgget(KEY, 0666);
    if (msgid == -1) {
        perror("msgget");
        return 1;
    }

    struct msgbuf message;
    
    if (msgrcv(msgid, &message, sizeof(message.mtext), 0, 0) == -1) {
        perror("msgrcv");
        return 1;
    }

    printf("Received message: %s\n", message.mtext);

    // Optional: remove the message queue after use
    // msgctl(msgid, IPC_RMID, NULL);

    return 0;
}

