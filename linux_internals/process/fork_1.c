#include<stdio.h>
#include<sys/types.h>
#include<unistd.h>

int global=10;

int main(void)
{


	int a=11,b=12;

	pid_t pid=-1;
	pid=fork();

	if(pid == 0)
	{
		printf("I am the child process\n");
		printf("\n");
		printf("child -Before modifying the value in the memory layout\n");
		printf("c -a value is %d and address is %p\n",a,&a);
		printf("c -b value is %d and address is %p\n",b,&b);
		printf("c -global value is %d and address is %p\n",global,&global);

		printf("\n");
		printf("c -Modifying the values of a,b and global variables\n");
		a=13,b=14;
		global=11;
		printf("c -After  modifying the value in the memory layout\n");
		printf("c -a value is %d and address is %p\n",a,&a);
		printf("c -b value is %d and address is %p\n",b,&b);
		printf("c -global value is %d and address is %p\n",global,&global);
		
		printf("\n");

		printf("c -The main function address is %p\n",main);
		printf("\n");

		getchar();


	}

	else
	{
		//getchar();
		printf("\n");
		printf("I am the parent process\n");
		printf("\n");
		printf("Before modifying the value in the memory layout\n");
		printf("a value is %d and address is %p\n",a,&a);
		printf("b value is %d and address is %p\n",b,&b);
		printf("global value is %d and address is %p\n",global,&global);

		printf("\n");
		printf("Modifying the values of a,b and global variables\n");
		a=13,b=14;
		global=11;
		printf("After  modifying the value in the memory layout\n");
		printf("a value is %d and address is %p\n",a,&a);
		printf("b value is %d and address is %p\n",b,&b);
		printf("global value is %d and address is %p\n",global,&global);
		
		printf("\n");

		printf("The main function address is %p\n",main);
		printf("\n");
		getchar();

	}

	return 0;
}
