#include<stdio.h>
#include<stdlib.h>
int main(void)
{
	int n,*p=NULL,*q=NULL;
	printf("Enter the size\n");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	printf("The size allocated %d \n",n*4);
	printf("Reallocating size\n");
	printf("Enter the new size\n");
	scanf("%d",&n);
	q=(int*)realloc(p,n*sizeof(int));
	if(q == NULL)
	{
		printf("Memory allocation failed\n");
		return -1;
	}

	free(p);
	p=q;//new size will be allocated inthe p
	printf("The new size is %d\n",n*sizeof(int));
	p=NULL;
	q=NULL;
	return 0;	
}
