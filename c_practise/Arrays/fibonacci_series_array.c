#include<stdio.h>
#define n 10
int main(void)
{
	int a[n];
	a[0]=a[1]=1;
	for(int i=2;i<n;i++)a[i]=a[i-1]+a[i-2];
	for(int i=0;i<n;i++)printf("%3d",a[i]);
	printf("\n");
	return 0;
}
