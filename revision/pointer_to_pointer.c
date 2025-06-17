#include<stdio.h>
int main(void)
{
	int a=10;
	int *p=&a;
	int **pp=&p;
	printf("The var -> address=%p and value=%d\n",&a,a);
	printf("The p pointer ->variable address=%p ,pointer address=%p ,value variable=%d\n",p,&p,*p);
	printf("The double pointer ->address of pointer=%p address of variable=%p\n",pp,*pp);
	printf("The double pointer ->value is %d\n",**pp);
	printf("Size of a: %zu, p: %zu, pp: %zu\n", sizeof(a), sizeof(p), sizeof(pp));
	**pp=50;
	printf("The value of var is %d\n",a);
	return 0;
}
