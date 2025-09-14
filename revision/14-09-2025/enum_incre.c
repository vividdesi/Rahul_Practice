#include<stdio.h>

typedef enum OPERATION
{
	READ=1,WRITE,EXECUTE,EXIT
}op;

int main(void)
{
	op p=READ;
	while(1)
	{
		printf("the value is %d\n",p++);

		if(p > EXIT)return 0;
	}


}

