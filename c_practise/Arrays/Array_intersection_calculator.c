/*
 * Determine the intersection of two integer arrays.

WTD: Compare every element of the two arrays, listing down the common integers that appear in both.

(e.g.: I/P: [1,2,4,5,6], [2,3,5,7], O/P: [2,5])
*/

#include<stdio.h>
#define max 100
void Array_intersection_cal(int a[max],int b[max],int size);
void Array_enter_Data(int a[max],int size);
int main(void)
{
	int a[max]={0}, b[max]={0},size=0;
	printf("Enter the size of array max-100\n");
	scanf("%d",&size);
	Array_enter_Data(a,size);
	Array_enter_Data(b,size);
	Array_intersection_cal(a,b,size);
	return 0;
}

void Array_intersection_cal(int a[max],int b[max],int size)
{

	for(int i=0;i<size;i++)
	{
		for(int j=0;j<size;j++)
		{
			if(a[i]==b[j])printf("%d ",a[i]);
		}
	}
  	printf("\n");
}

void Array_enter_Data(int a[max],int n)
{	printf("Enter the elements\n");
	for(int i=0;i<n;i++)scanf("%d",&a[i]);
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	printf("\n");
}

