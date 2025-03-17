#include<stdio.h>
int binary_search(int a[],int size,int item);
int main(void)
{
        int arr[5],n,item;
        printf("Enter the values in the array upto 5 in an ascending order \n");
        n=sizeof(arr)/sizeof(arr[0]);
        for(int i=0;i<n;i++)scanf("%d",&arr[i]);
        printf("Entered values are\n");
        for(int i=0;i<n;i++)printf("%d ",arr[i]);
        printf("\n");
        printf("Enter the number u want to search\n");
        scanf("%d",&item);
        int i=binary_search(arr,n,item);
        if(i>=0)printf("The number is present at index arr[%d] is %d\n",i,arr[i]);
        else printf("The  number is not present  there\n");
        return 0;
}

int binary_search(int a[],int size,int item)
{
	int mid=size/2,i;
	if(item<=a[mid])
	{
		i=0,size=mid;
	}
	else i=mid;
	printf("The i value is %d and size value is %d\n",i,size);
	for(i;i<=size;i++)if(item == a[i])return i;
	return -1;
}

