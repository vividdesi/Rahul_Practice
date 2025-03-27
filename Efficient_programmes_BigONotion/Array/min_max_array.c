#include<stdio.h>
int main(void)
{
	int size;
	printf("enter the size\n");
	scanf("%d",&size);
	if(size <= 0)
	{
		printf("Invalid size\n");
		return 1;
	}
	int a[size],min,max;
	printf("Enter the value\n");
	scanf("%d",&a[0]);
	min=max=a[0];
	for(int i=1;i<size;i++)
	{
		scanf("%d",&a[i]);
		if(min>a[i])min=a[i];
		if(max < a[i])max=a[i];
	}
	printf("The max value is %d and min value is %d\n",max,min);
	return 0;
}

	
