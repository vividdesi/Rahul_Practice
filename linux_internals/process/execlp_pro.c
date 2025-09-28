#include<stdio.h>
#include<unistd.h>

int main(void)
{
	printf("Before excelp\n");
	execlp("./hello","hi",NULL);
	perror("Execlp failed\n");
	return 1;
}
