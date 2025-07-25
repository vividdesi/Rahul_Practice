#include <stdio.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include <sys/types.h>
#include<time.h>
#include "msg_def.h"

int main() {
	struct msqid_ds m;
    int msgid = msgget(KEY, 0666 | IPC_CREAT);
    if (msgid == -1) {
        perror("msgget");
        return 1;
    }


	msgctl(msgid, IPC_STAT,&m);
	printf("The number of  messages sent :%ld\n",m.msg_qnum);
	printf("The number of bytes used :%ld\n",m.msg_cbytes);
   return 0;
}

