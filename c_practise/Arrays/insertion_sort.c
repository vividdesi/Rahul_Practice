#include<stdio.h>

void disp(const int *p,int size)
{
	for(int i=0;i<size;i++)printf("%d ",p[i]);
	printf("\n");
}

int main(void)
{
	int a[5]={5,4,1,2,3};
	int i,j,temp;
	printf("Before sorting value\n");
	disp(a,5);

	for(i=1;i<5;i++)
	{
		j=i-1;
		temp=a[i];
		while(j>=0 && a[j] > temp)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=temp;
	}
	
	printf("After sorting value\n");
	disp(a,5);
}
