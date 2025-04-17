#include<stdio.h>
#include<stdlib.h>
void print(int *q,int n)
{
	for(int i=0;i<n;i++)
	{
		printf("%d ",*(q+i));
	}
	printf("\n");
}
int insert(int *z,int n)
{

	for(int i=0;i<n;i++)
	{
		printf("Enter the value-%d\n",i+1);
		if(scanf("%d",z+i) != 1)
		{
			printf("Invalid input\n");
			return 1;
		}
	}
	return 0;
}
int main(void)
{
	int n;
	printf("Enter the size to allocate\n");
	if(scanf("%d",&n) != 1)
	{
		printf("Invalid size\n");
		return 1;
	}
	if(n<=0)
	{
		printf("Invalid memory size\n");
		return 1;
	}
	int *p=NULL;
	p=calloc(n,sizeof(*p));		
	if(p != NULL)
	{
	if(insert(p,n) == 0)
	{
	 printf("Entered  values are \n");
	 print(p,n);
	}
	 free(p);
	}
	else
	{
		printf("Memory allocation failed\n");
	}

	return 0;
}
