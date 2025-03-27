#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int size,i;
	printf("Enter the size of the array\n");
	scanf("%d",&size);
	if(size <= 0)
	{
		printf("Size is invalid\n");
		return 1;
	}
	int *arr=(int *)malloc(size*sizeof(int));
	int *even=(int*)malloc((size/2)*sizeof(int));
	int *odd=(int *)malloc((size/2)*sizeof(int));
	if( !arr ||!even || !odd)
	{
		printf("Memmory allocation failed\n");
		return 1;
	}

	int count_even=0,count_odd=0;
	printf("Enter the values in array\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2==0)
		{
			if(count_even>=size/2)even=realloc(even,(count_even+1)*sizeof(int));
			even[count_even++]=arr[i];
		}
		else 
		{
			if(count_odd>=size/2)odd=realloc(odd,(count_odd+1)*sizeof(int));
			odd[count_odd++]=arr[i];
		}
	}
	printf("The even values are \n");
	for(i=0;i<count_even;i++)printf("%d ",even[i]);
	printf("\n");
        printf("The odd values are \n");
        for(i=0;i<count_odd;i++)printf("%d ",odd[i]);
	printf("\n");
	free(arr),free(even),free(odd);
	return 0;
}


	



