#include<stdio.h>
int main(void)
{
	int a=10;
	//allocated virtual address
	//but due to local memory the virtual address is allocated at run time
	int *p=NULL;
	//declare a pointer which is stored an NULL
	p=&a;
	//giving a variable virtual address to the pointer 
	
	printf("The a value is %d\n",*p);
	//As p is a pointer pointer pointing or stored a variable virtual address by usinf dereference we can access the value atb that address=	//locations
	
	*p=20;
	//modifying the a variable values at that location using pointer
	printf("The a value is %d\n",a);
	return 0;
	
}
