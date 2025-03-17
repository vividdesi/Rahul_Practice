#include<stdio.h>
int linear_search(int arr[],int n,int item);
int main(void)
{
	int arr[5],n,item;
	printf("Enter the values in the array upto 5\n");
	n=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<n;i++)scanf("%d",&arr[i]);
	printf("Entered values are\n");
	for(int i=0;i<n;i++)printf("%d ",arr[i]);
	printf("\n");
	printf("Enter the number u want to search\n");
	scanf("%d",&item);
	int i=linear_search(arr,n,item);
	if(i>0)printf("The number is present at index arr[%d] is %d\n",i,arr[i]);
	else printf("The searched number is not there\n");
	return 0;
}

int linear_search(int arr[],int n,int item)
{
  for(int i=0;i<n;i++)
  {
	  if(item == arr[i])return i;
  }
  return 0;
}
	




