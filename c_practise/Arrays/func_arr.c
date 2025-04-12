#include<stdio.h>
void func(int a[],int i,int j);
int main(void)
{
	int a[10]={1,6,2,7,3,4,8,10,9,5};
	func(a,2,7);
	printf("\n");
	return 0;
}
void func(int a[],int i,int j)
{
	if(i>j)return ;
	func(a,i+1,j);
	printf("%d ",a[i]);
}
