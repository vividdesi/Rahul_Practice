#include<stdio.h>
#include<stdlib.h>

typedef enum operation
{
	READ=1,
	WRITE,
	EXECUTE,
	EXIT,
}OP;

int main(void)
{

	int choice;
	while(1)
	{
	printf("Enter the choice you want\n");
	printf("1.READ 2.WRITE 3.EXECUTE 4.EXIT\n");
	scanf("%d",&choice);

	OP p=(OP)choice;

	switch(p)
	{
		case READ:printf("Operation is reading \n");break;
		case WRITE:printf("Operation is writing \n");break;
	        case EXECUTE:printf("operation is executing\n");break;
	        case EXIT:printf("operation is exiting\n");
			  printf("Thank you\n");
			  exit(0);
	        default:printf("Invalid operation\n");
	}


	}


	return 0;
}
