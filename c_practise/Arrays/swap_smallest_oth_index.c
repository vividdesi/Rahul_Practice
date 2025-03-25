#include<stdio.h>
int main(void)
{
	int size,i;
	printf("Enter the size of array\n");
	scanf("%d",&size);
	int a[size],min=1000000,index=0;
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		if(a[i]<min)
		{       min=a[i];
			index=i;
		}
			
	}
	printf("The min value is %d and index is %d\n",min,index);
	if(a[0]!=min && min != 0)
	{
	a[0]=a[index]+a[0];//6
	a[index]=a[0]-a[index];//5
	a[0]=a[0]-a[index];//1
        }
	for(i=0;i<size;i++)printf("%d ",a[i]);
	printf("\n");
	return 0;
}
	

