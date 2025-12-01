#include<stdio.h>

void display(int *a,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",a[i]);
	}
	printf("\n");
}

void modify_array(int *a,int size)
{
	for(int i=0;i<size;i++)
	{
		a[i]=a[i]+1;
	}
}

int main(void)
{
	int a[5]={1,2,3,4,5};
	display(a,5);
	modify_array(a,5);
	display(a,5);
	return 0;
}
