#include<stdio.h>
int main(void)
{
	int a[5]={0},size=sizeof(a)/4;
	printf("Enter the elements\n");
	for(int i=0;i<size;i++)scanf("%d",&a[i]);
	for(int i=0;i<size;i++)
	{
		if(a[i]%2==0)a[i]=0;
		else a[i]=1;
	}

	for(int i=0;i<size;i++)printf("%d ",a[i]);
	printf("\n");
	return 0;
}

