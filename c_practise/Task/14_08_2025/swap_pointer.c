#include<stdio.h>
void swap_value(int *p,int *q);
int main(void)
{
	int a=10,b=10;
	printf("Before swapping a is %d and b is %d\n",a,b);
	swap_value(&a,&b);
	printf("After swapping a is %d and b is %d\n",a,b);
	return 0;
}

void swap_value(int *p,int *q)
{
	if(p == q)return ;
	else
	{
		*p=*p ^ *q;
		*q=*p ^ *q;
		*p=*p ^ *q;
	}
}
