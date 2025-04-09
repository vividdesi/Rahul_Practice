#include<stdio.h>
void swapvar(int,int);
void swap_array(int a[],int b[]);
int main(void)
{
	int a=5,b=10;
	int c[5]={1,2,3,4,5},d[5]={6,7,8,9,10};
	printf("Before swapping variable %d and %d\n",a,b);
	swapvar(a,b);
	printf("After swapping variable %d and %d\n",a,b);
	printf("The values wont change because function is call by value\n");
	printf("Copies the values from main to function\n");
	printf("Before swapping array\n");
	printf("The value of c[0] is %d and c[4] is %d\n",c[0],c[4]);
	printf("The value of d[0] is %d and d[4] is %d\n",d[0],d[4]);
	swap_array(c,d);
	printf("After swapping array\n");
	printf("The value of c[0] is %d and c[4] is %d\n",c[0],c[4]);
	printf("The value of d[0] is %d and d[4] is %d\n",d[0],d[4]);
	return 0;
}
void swapvar(int a,int b)
{
	int temp=a;
	a=b;
	b=temp;
}
void swap_array(int a[5],int b[5])
{
	int i,temp;
	for(i=0;i<5;i++)
	{
		temp=a[i];
		a[i]=b[i];
		b[i]=temp;
	}
}
