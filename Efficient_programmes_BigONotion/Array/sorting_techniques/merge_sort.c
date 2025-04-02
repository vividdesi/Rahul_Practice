#include<stdio.h>
void merge(int a[],int lb,int mid,int ub)
{
	int i=lb,j=mid+1,k=lb;
	int b[ub+1];
	while(i<=mid && j<=ub)
	{
		if(a[i]<=a[j])b[k++]=a[i++];
		else b[k++]=a[j++];
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k++]=a[j++];
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k++]=a[i++];
		}
	}
	for(k=lb;k<=ub;k++)a[k]=b[k];
}
void mergesort(int a[],int lb,int ub)
{
	if(lb<ub)
	{
		int mid=lb+(ub-lb)/2;
		mergesort(a,lb,mid);
		mergesort(a,mid+1,ub);
		merge(a,lb,mid,ub);
	}
}

int main(void)
{
	int a[9]={7,6,7,5,1,2,9,15,10};
	mergesort(a,0,8);
	printf("The sorted array is \n");
	for(int i=0;i<9;i++)printf("%d ",a[i]);
	printf("\n");
	return 0;
}

