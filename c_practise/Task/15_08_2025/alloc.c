#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
void min_max(int *p,uint8_t size)
{
	uint8_t min=0,max=0,i=0;

	for(;i<size;i++)
	{
		if(p[min] < p[i])min=i;
		if(p[max] > p[i])max=i;
	}
	printf("The max is %d and min is %d\n",p[min],p[max]);
	printf("swapping the min and max\n");
	uint8_t temp;
	temp=p[min];
	p[min]=p[max];
	p[max]=temp;

}
int main(void)
{
	int *p=NULL;
	uint8_t size,i;
	printf("Enter the number of elements\n");
	scanf("%hhu",&size);
	p=malloc(sizeof(int)*size);
	if(p != NULL)
	{
		printf("Enter elements:");
		for(i=0;i<size;i++)
		{
			scanf("%d",&p[i]);
		}
		printf("\n");
		
		printf("The elements:");
		for(i=0;i<size;i++)
		{
			printf("%d ",p[i]);
		}
		printf("\n");
		min_max(p,size);

		printf("The elements after swapped are:");
		for(i=0;i<size;i++)
		{
			printf("%d ",p[i]);
		}
		printf("\n");
		
		free(p);

	}

	else
	{
		printf("Memory allocation failed\n");
	}
	return 0;
}
