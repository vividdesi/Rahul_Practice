#include<stdio.h>
#include <sys/types.h>
#include <sys/ipc.h>
#include <sys/msg.h>
#include<string.h>
#define KEY 1231
typedef struct  
{
   	long mtype;       /* message type, must be > 0 */
        char mtext[15];    /* message data */
}msg;
int main()
{
	int i;
	msg m1,m2;
	int var=msgget(KEY,IPC_CREAT|IPC_EXCL|0666);
	printf("Identifier created succefully %d\n",var);
	m1.mtype=1;
	strcpy(m1.mtext,"hello");	
	i=msgsnd(var,&m1,sizeof(msg),IPC_NOWAIT);
	printf("%d\n",i);
}
