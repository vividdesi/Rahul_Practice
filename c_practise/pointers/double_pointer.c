#include<stdio.h>
int main(void)
{
	int a=10;
	int *p=NULL,**q=NULL;
	p=&a;
	q=&p;

	printf("The value of a by pointer p is %d\n",*p);
	printf("The value of a by pointer to pointer q is %d\n",**q);

	printf("Modifying the value of a by pointer p\n");
	*p=30;
	printf("The modified  value of a by pointer p is %d\n",*p);
	printf("Modifying the value of a by pointer to pointer q\n");
	**q=40;
	printf("The value of a by pointer to pointer q is %d\n",**q);


}
