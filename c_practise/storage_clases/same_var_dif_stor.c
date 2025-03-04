#include<stdio.h>
//int a=12;global variable is not working error at compilation stage
//static int a=11;//no error in compilation stage but while printing output is only local a variable preffered
int main()
{
	int a=12;
	static int a=12;//compilation error occured using same variable
	printf("The local value is %d and static value is %d\n",a,a);
	return 0;
}
/* so we cannot use same variable with different storage clases ,it can be difficult to understand the storage of an variable because of confusion*/
