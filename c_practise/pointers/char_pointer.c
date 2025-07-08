#include<stdio.h>
int main(void)
{
	char a='A';
	char *p=NULL;
	p=&a;
	printf("The char value by pointer is %c\n",*p);
	printf("The char address is %p\n",(void*)p);
	printf("The pointer address is %p\n",(void*)&p);
	return 0;
}
