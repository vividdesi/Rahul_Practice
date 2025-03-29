#include<stdio.h>
void print(int a[],int n);
void insert_array(int a[],int n);
void insertion_sort(int a[],int n);
int main(void)
{
	int size;
	printf("Enter thwe size of the array\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the values\n");
	insert_array(a,size);
	printf("Before sorting the values are \n");
	print(a,size);
	insertion_sort(a,size);
	printf("After sorting the values are \n");
	print(a,size);
	return 0;
}
void print(int a[],int n)
{
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	printf("\n");
}
void insert_array(int a[],int n)
{
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
}
void insertion_sort(int a[],int n)
{
	int temp,i,j;
	for(i=1;i<n;i++)
	{
		j=i-1;
		temp=a[i];
		while(j>=0 && a[j]>temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
}






