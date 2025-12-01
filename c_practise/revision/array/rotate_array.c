#include<stdio.h>
void display(int *a,int n);
void rotate_left(int *a,int n,int k);
void rotate_right(int *a,int n,int k);
int main(void)
{
	int a[5]={1,2,3,4,5};
	display(a,5);
	rotate_left(a,5,1);
	display(a,5);
	rotate_right(a,5,2);
	display(a,5);
	return 0;
}
void display(int *a,int n)
{
	printf("The elements are\n");
	for( int i=0;i<5;i++)printf("%d ",a[i]);
	printf("\n");
}
void rotate_left(int *a,int n,int k)
{
	k%=n;
	while(k--)
	{
		int i,temp;
		temp=a[0];
		for(i=0;i<n-1;i++)a[i]=a[i+1];
		a[i]=temp;
	}
}
void rotate_right(int *a,int n,int k)
{
	k%=n;
	while(k--)
	{
		int i,temp;
		temp=a[n-1];
		for(i=n-1;i>0;i--)a[i]=a[i-1];
		a[i]=temp;
	}
}

