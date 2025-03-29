#include<stdio.h>
void print_array(int a[],int n);
void input_array(int a[],int n);
void bubble_sort(int a[],int n);
int main(void)
{
	int size;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int a[size];
	printf("Enter the values in the array\n");
	input_array(a,size);
	printf("The Before sorting the  values are\n");
	print_array(a,size);
	bubble_sort(a,size);
	printf("After sorting the values are \n");
	print_array(a,size);
	return 0;
}

void print_array(int a[],int n)
{
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	printf("\n");
}

void input_array(int a[],int n)
{
	 for(int i=0;i<n;i++)scanf("%d",&a[i]);
}
void bubble_sort(int a[],int n)
{
	int i,j,flag,temp;
	int last_swap=n-1,new_last_swap=0;
	for(i=0;i<n-1;i++)
	{
		flag=0;

		for(j=0;j<last_swap;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
				new_last_swap=j;
			}
		}
		if(flag == 0)break;
		last_swap=new_last_swap;
	}
}


