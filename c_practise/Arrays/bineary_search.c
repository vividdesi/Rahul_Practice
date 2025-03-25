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
	printf("The i value is %d\n",i);
        if(i>=0)printf("The number is present\n");
        else printf("The  number is not present  there\n");
        return 0;
}

int binary_search(int a[],int size,int item)
{
	int mid,left=0,right=size-1;
	while(left <= right)
	{
	mid=left+(right -left)/2;
	if(a[mid]==item)return a[mid];
	else if(a[mid]<item)left=mid +1;
	else right=mid -1;
	}
	return -1;
}

