#include<stdio.h>
#define n 5
void print_array(int a[n]);
void reverse_array(int a[n]);
int main(void)
{
	int a[n];
	printf("Enter the values\n");
	for(int i=0;i<n;i++)
	scanf("%d",&a[i]);
	printf("Before reversing the array\n");
	print_array(a);
	reverse_array(a);
	printf("After reversing the array\n");
	print_array(a);
	return 0;
}

void print_array(int a[n])
{
	for(int i=0;i<n;i++)
		printf("%d ",a[i]);
	printf("\n");
}

void reverse_array(int a[n])
{
	int start=0,end=n-1,temp;
	while(start<end)
	{
		temp=a[start];
		a[start]=a[end];
		a[end]=temp;
		start++;
		end--;
	}
}



  
