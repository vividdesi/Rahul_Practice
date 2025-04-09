#include<stdio.h>
int main(void)
{
	int a[20];
	printf("Enter the size below 20\n");
	int size,i,j;
	scanf("%d",&size);
	printf("Enter the values\n");
	for(i=0;i<size;i++)scanf("%d",&a[i]);
	printf("Before sorting the array\n");
	for(i=0;i<size;i++)printf("%d ",a[i]);
	printf("\n");
	int last_swap=size-1,new_swap=0,flag=0,temp;
	for(i=0;i<size-1;i++)
	{       flag=0;
		for(j=0;j<last_swap;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
				new_swap=j;
			}
		}
		if( flag ==0)break;
		last_swap=new_swap;
	}

	printf("After sorting the array\n");
	for(i=0;i<size;i++)printf("%d ",a[i]);printf("\n");
	j=size;
	printf("Enter the value above the %d and below the 20\n",size);
	scanf("%d",&size);
	printf("Enter the values\n");
	for(i=j;i<size;i++)scanf("%d",&a[i]);
	printf("Before sorting the array\n");
	for(i=0;i<size;i++)printf("%d ",a[i]);
	printf("\n");
	last_swap=size-1,new_swap=0;
	for(i=0;i<size-1;i++)
	{       flag=0;
		for(j=0;j<last_swap;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
				flag=1;
				new_swap=j;
			}
		}
		if( flag ==0)break;
		last_swap=new_swap;
	}

	printf("After sorting the array\n");
	for(i=0;i<size;i++)printf("%d ",a[i]);printf("\n");



	return 0;
}

