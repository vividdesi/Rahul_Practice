#include <stdio.h>
#include <unistd.h>

int main() {
	pid_t pid=fork();
	int i=1;

		while(1)
		{
			if(pid == 0)
			printf("%d.child process and pids are %d\n",i,getpid());

			else if(pid > 0)
			printf("%d.parent process and pids are %d\n",i,getpid());

			else
			printf("process creation failed\n");
			
			sleep(1);
			i++;			
		};

	return 0;
}

