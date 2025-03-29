#include<stdio.h>
void print(int *p,int n);
void insert_array(int *p,int n);
void insertion_sort(int *p,int n);
int main(void)
{
	int size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int a[size];
	insert_array(a,size);
	printf("Before sorting the array\n");
	print(a,size);
	insertion_sort(a,size);
	printf("After sorting the array\n");
	print(a,size);
	return 0;
}
void print(int *p,int n)
{
	for(int i=0;i<n;i++)printf("%d ",*(p+i));
	printf("\n");
}
void insert_array(int *p,int n)
{
	for(int i=0;i<n;i++)scanf("%d",p+i);
}
void insertion_sort(int *p,int n)
{
	int i,temp;
	for(int i=1;i<n;i++)
	{
		temp=p[i];
		int *j=&p[i-1];	
		while(j>=p && *j>temp)
		{
			*(j+1)=*j;
			j--;
		}
		*(j+1)=temp;
	}
}

