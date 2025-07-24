#include <unistd.h>
#include<stdio.h>
int main()
{
	
	int fds[2];//array
        int res,i;//int variables
        char *buf1="Gopal Krishna";
        char buf2[13];
        res = pipe(fds);
        /* fds[0] for reading and fds[1] for writing */
/*      if(res==-1)
        {
                printf("This is error form pipe");
                exit(1);
        } */
        printf("Return value of pipe is : %d\n",res);
        write(fds[1],buf1,13);
        read(fds[0],buf2,13);
        for(i=0;i<13;i++)
        printf("%c",buf2[i]);
        printf("\n");
}
