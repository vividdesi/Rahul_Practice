#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int *p=NULL;
	int n,i=0;
	printf("Enter the size u want dynamically allocate the data\n");
	scanf("%d",&n);
	getchar();
	p=(int*)malloc(n*sizeof(int));
	if(p != NULL)
	{
		printf("Enter the data\n");
		for( ;i<n;i++)
		{
			printf("Data -%d =",i+1);
			scanf("%d",p+i);
			printf("\n");
			getchar();
		}
		printf("The Entered data is \n");
		for(i=0;i<n;i++)
		{
			printf("Data-%d =%d\n",i+1,*(p+i));
		}
		printf("Freeing the memory\n");
		free(p);
	}
	else
	{
		printf("Memory allocation failed\n");
	}
	return 0;
}
