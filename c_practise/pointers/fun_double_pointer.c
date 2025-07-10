#include<stdio.h>
void swap(int **p,int **q);
int main(void)
{
	int a=10,b=20;
	int *p=NULL,*q=NULL;
	p=&a,q=&b;
	printf("The value of a is %d and b is %d\n",*p,*q);
	swap(&p,&q);
	printf("after the swapping value by double pointer function \n");
	printf("The value of a is %d and b is %d\n",*p,*q);
	return 0;
}

void swap(int **p,int **q)
{
	int temp;
	temp=**p;
	**p=**q;
	**q=temp;
}
