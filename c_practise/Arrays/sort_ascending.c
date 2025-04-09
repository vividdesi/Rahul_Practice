#include<stdio.h>
int main(void)
{
	int size,i,j;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the values \n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Before sorting the array\n");
	for(i=1;i<size;i++)
	{
		int temp=a[i];
		j=i-1;
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	printf("After sorting the array\n");
	for(i=0;i<size;i++)
		printf("%d ",a[i]);
	printf("\n");
	return 0;
}

