#include<stdio.h>
#define n 10
void print(int a[])
{
	for(int i=0;i<n;i++)printf("%d ",a[i]);
	printf("\n");
}
int main(void)
{
	int i,j,a[n]={1};
	printf("before operation the values are\n");
	print(a);
	printf ("After operation values are\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
		{
			a[i]+=a[j];
		}
		
	}
	print(a);
	return 0;
}
