#include<stdio.h>
#include <sys/types.h>
#include <unistd.h>

int main(void)
{

	//only one process is running
	fork();

	//parent and child process is running 1 is 2 times printed
	printf("1\n");

	//again for parent and child we have another 2 process created and 2 will print 4 times
	fork();

	printf("2\n");
	//these 4 process again creates 4 more child process
	fork();
	//8 process creates 8more process
	fork();
	//hi will printed 16 times
	printf("Hi\n");
	//waiting for enter until that process will be running in back ground
	getchar();
	//when you enter i think remaining process will be orphan and take cared by systemmd or init....!
	return 0;
}
