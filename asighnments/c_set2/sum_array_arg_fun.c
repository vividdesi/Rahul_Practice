#include<stdio.h>
#define max 5
int sum_array(int a[max],int size);
int main()
{
	int a[max]={0};
	printf("Enter the values\n");
	for(int i=0 ;i<(sizeof(a)/4);i++)scanf("%d",&a[i]);
	printf("The sum of array is %d\n",sum_array(a,(sizeof(a)/4)));
	return 0;
}
int sum_array(int a[max],int size)
{
  int sum=0;
  for(int i=0;i<size;i++)sum+=a[i];
  return sum;
 }

