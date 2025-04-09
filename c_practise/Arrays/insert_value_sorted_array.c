#include<stdio.h>
#define max 100;
int main(void)
{
	int a[20];
	int size,pos,value,i;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	printf("Enter the values in sorted manner\n");
	for(i=0;i<size;i++)scanf("%d",&a[i]);
	printf("The array values are \n");
	for(i=0;i<size;i++)printf("%d ",a[i]);
	printf("\n");
	printf("Enter the value and position \n");
	scanf("%d%d",&value,&pos);
	for(i=size-1;i>=pos;i--)
		a[i+1]=a[i];
	a[pos]=value;
	++size;
	for(i=0;i<size;i++)printf("%d ",a[i]);
	printf("\n");
	return 0;
}

