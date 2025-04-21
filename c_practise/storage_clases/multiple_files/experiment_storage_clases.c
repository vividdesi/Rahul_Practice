#include<stdio.h>

void auto_variable( )
{
	int a=10;
	printf("The value is %d\n",a);
}

extern int global;

int main(void)
{
	auto_variable();
	register int i=1;
	for(i=1;i<=5;i++)
	{
		printf("The register value is %d\n",i);
	}

	printf("The global variable value is %d\n",global);

	return 0;
}
