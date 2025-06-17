#include<stdio.h>
int main(void)
{
	 int var=10;//int variable declared auto variable),stored in stack,scope-within block,lifetime-within block
	unsigned short int *ptr=NULL;//we can use this or int *ptr=&val;,auto pointer stored inn stack pointing to null of int datatype pointer
	ptr=&var;	      //ptr pointing to var variable address
	printf("Accessing the address of variable %p\n",(void*)&var);
	printf("Accessing the address of var variable by pointer 0x%p\n",(void *)ptr);
	printf("Accessing value by variable-%hd and pointer -%hd\n",var,*ptr);
	printf("Pointers address is %p\n",(void *)&ptr);
	printf("Size of var:%zu,size of ptr:%zu\n",sizeof(var),sizeof(ptr));
	return 0;
}
