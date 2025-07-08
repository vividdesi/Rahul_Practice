#include<stdio.h>
int main(void)
{
	float pi=3.15;
	printf("The pi value is %.2f\n",pi);
	printf("The address of pi is %p\n",(void*)&pi);
	float *p=NULL;
	p=&pi;
	printf("The pie value using pointer is %.2f\n",*p);
	printf("The pointer addres is %p\n",(void*)&p);
	printf("The variable address using pointer is %p\n",(void*)p);
	*p=3.14;
	printf("The modified address value is %.2f\n",*p);

	return 0;
}
