#include<stdio.h>
int main(void)
{
	int i,size,pos;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the values\n");
	for(i=0;i<size;i++)scanf("%d",&a[i]);
	printf("Entered values are \n");
	for(i=0;i<size;i++)printf("%d ",a[i]);
	printf("\n");
	printf("Enter the pos u want to delete\n");
	scanf("%d",&pos);
	if(pos>size)
	{
		printf("Invalid position size\n");
		return 1;
	}
	for(i=pos;i<size;i++)a[i]=a[i+1];
	--size;
	printf("After removing the array elements are\n");
	for(i=0;i<size;i++)printf("%d ",a[i]);
	printf("\n");
	return 0;
}



