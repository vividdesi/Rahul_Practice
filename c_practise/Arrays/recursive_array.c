#include<stdio.h>
int func(int a[],int size)
{
	if(size == 0)return 0;
	else if (a[size-1]%2 ==0)return 1 + func(a,size-1);
	else func(a,size-1);
}
int main(void)
{
	int arr[10]={1,2,3,4,8,10};
	printf("The recursive value is %d\n",func(arr,6));
	return 0;
}
