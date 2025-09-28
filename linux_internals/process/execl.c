#include<stdio.h>
#include<unistd.h>

int main(void)
{

	printf("Before execl\n");
	execl("/bin/echo","echo","hello world","\nhow are you ?",NULL);
	perror("Exec failed\n");
	return 1;
}
