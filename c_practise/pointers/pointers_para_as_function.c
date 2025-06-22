#include<stdio.h>
#define SIZE 5

void add_5_array(int *p,int size);

int main(void)
{
	int a[SIZE]={1,2,3,4,5};
	add_5_array(a,SIZE);

	printf("The Modified values are \n");
	for(int i=0;i<SIZE;i++)printf("%d\n",a[i]);
	
	return 0;
}

void add_5_array(int *p,int size)
{
	int i=0;

	printf("Values of array\n");
	for(i=0;i<size;i++)printf("%d\n",*(p+i));

	printf("Modifying the Array values\n");
	for(i=0;i<size;i++)p[i]+=5;
}
