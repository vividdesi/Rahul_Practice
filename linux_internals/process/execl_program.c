#include<stdio.h>
#include<unistd.h>

int main(void)
{

	printf("Before execl\n");
	execl("hello","hiiiiiiiiiiii...!",NULL);
	perror("Exec failed\n");
	return 1;
}
