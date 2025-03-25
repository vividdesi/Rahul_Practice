#include<stdio.h>
void print(int a[],int);
void selection_sort(int a[],int);
int main(void)
{
	int size;
	printf("Enter the size\n");
	scanf("%d",&size);
	int a[size];
	for(int i=0;i<size;i++)scanf("%d",&a[i]);
	printf("Before sorting this array\n");
	print(a,size);
	selection_sort(a,size);
	printf("After sorting this array\n");
	print(a,size);
	return 0;
}
void print(int a[],int n=n-1)
{
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	printf("\n");
}

void selection_sort(int a[],int n)
{
	int temp;
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(a[j]<a[i])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
}

