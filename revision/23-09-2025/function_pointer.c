#include<stdio.h>

int add(int a,int b)
{
	return a+b;
}

int sub(int a,int b)
{
	return a-b;
}


int multi(int a,int b)
{
	return a*b;
}


int main(void)
{

	int (*fp[3])(int,int);
		//={add,sub,multi};
	(fp[0])=add;
	(fp[1])=sub;
	(fp[2])=multi;

	printf("The addition value is %d\n",(*fp[0])(10,20));	
	printf("The Sub value is %d\n",(*fp[1])(10,20));	
	printf("The multi value is %d\n",(*fp[2])(10,20));	

	return 0;
}
