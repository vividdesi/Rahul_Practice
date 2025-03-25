#include<stdio.h>
void print(int a[],int);
void selection_sort(int a[],int n);
int main(void)
{
	int size;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	int a[size];
	for(int i=0;i<size;i++)scanf("%d",&a[i]);
	printf("Before swapping the number\n");
	print(a,size);
	selection_sort(a,size);
	printf("After swapping the number\n");
	print(a,size);
	return 0;
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	printf("\n");
}
void selection_sort(int a[],int n)
{
	int in,i,j,temp;
	for(i=0;i<n-1;i++)
	{	in=i;
		for(j=i+1;j<n;j++)
		{  if(a[j]<a[in])in=j;
		}
	
	if(in != i)
	{
		temp=a[i],a[i]=a[in],a[in]=temp;

	}
	}
}


