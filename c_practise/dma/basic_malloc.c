#include<stdio.h>
#include<stdlib.h>
void insert(int *q,int n,int z)
{
	printf("Enter the value\n");
	for(int i=z;i<n;i++)
	{
		printf("Enter the value-%d\n",i+1);
		scanf("%d",q+i);
	}
}

void print(int *q,int n)
{
	printf("The values are\n");
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(q+i));
	}
	printf("\n");

}
int main(void)
{
	int *p=NULL,n;
	printf("Enter the size u want to allocate\n");
	if(scanf("%d",&n) !=1 || n<=0)
	{
		printf("Invalid size\n");
		return -1;
	}
	p=(int *)malloc(n*sizeof(int));
	if(p == NULL)
	{
		printf("Memory allocation failed\n");
		return -1;
	}
	insert(p,n,0);
	print(p,n);
	int new_n;
	printf("Enter the value to realloc the size \n");
	scanf("%d",&new_n);
	p=(int *)realloc(p,new_n*sizeof(int));
	insert(p,new_n,n);
	print(p,new_n);
	free(p);
	p=NULL;	
	return 0;
}
