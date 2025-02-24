#include<stdio.h>
void swap(int*,int*);
int main()
{
	int a=0,b=0;
	printf("Enter the values u want to swap\n");
	scanf("%d%d",&a,&b);
	printf("Before the swapping a is %d and b is %d\n",a,b);
	swap(&a,&b);
	printf("After the swapping a is %d and b is %d\n",a,b);
	return 0;
}
void swap(int *p,int *q)
{
	int t=0;
	t=*p;
	*p=*q;
	*q=t;
}

	
