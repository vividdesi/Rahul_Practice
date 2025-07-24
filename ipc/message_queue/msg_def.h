#ifndef MSG_DEF_H
#define MSG_DEF_H

#define KEY 1234  // Same key for sender/receiver

struct msgbuf {
    long mtype;
    char mtext[100];
};

#endif

