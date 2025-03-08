#include<stdio.h>
int main(void)
{
	int a[5]={0},size=(sizeof(a)/4);
	printf("Enter the values\n");
	for(int i=0;i<size;i++)scanf("%d",&a[i]);
	for(int i=0;i<size;i++)
	{
		int temp=0;
		for(int j=i;j<size;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	for(int i=0;i<size;i++)printf("%d ",a[i]);
	printf("\n");
	return 0;
}

