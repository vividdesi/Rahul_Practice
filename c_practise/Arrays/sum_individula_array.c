#include<stdio.h>
#define n 6
int main(void)
{
	int i,j,a[n]={1,2,3,4,5,6};
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			a[i]+=a[j];
		}
	}
	for(i=0;i<n;i++)printf("%d ",a[i]);
	printf("\n");
	return 0;
}

