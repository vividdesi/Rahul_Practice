#include<stdio.h>
int main(void)
{
	int size,i,j,index;
	printf("Enter the size\n");
	scanf("%d",&size);
	if(size<=0)
	{
		printf("Invalid input\n");
		return 1;
	}
	int a[size];
	printf("Enter the values\n");
	for(i=0;i<size;i++)scanf("%d",&a[i]);
	for(i=0;i<size;i++)
	{
		index=i;
		for(j=0;j<size;j++)
		{
			if(a[i]>a[j])
			{
				index=j;
			}
		}
		if(i != index)
		{
			int temp=




