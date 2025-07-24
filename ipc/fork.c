#include <sys/types.h>
#include <unistd.h>
#include<stdio.h>
int main()
{
	 pid_t child;
	 char *buf1="hello";
	 char buf2[10];
	 int fds[2];
	 int res=pipe(fds);
  	child=fork();
	if(child == 0)
	{
		printf("I am in child process\n");
		close(fds[1]);
		printf("The child process pid is %d\n",getpid());
		read(fds[0],buf2,10);
		for(int i=0;i<10;i++)
		{
			printf("%c",buf2[i]);
		}
		printf("\n");
		
	}

	else
	{

		close(fds[0]);
		printf("I am in parent process %d\n",getpid());
		write(fds[1],buf1,10);

	}

}

