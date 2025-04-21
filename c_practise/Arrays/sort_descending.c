#include<stdio.h>
#include<stdlib.h>

void print_array(int *array,int size);
int Read_array(int *array,int size);
void sort_descending(int *array,int size);

int main(void)
{
	int size;
	printf("Enter the size to allocate\n");
	
	if(scanf("%d",&size) != 1)
	{
	  printf("Invalid input enter integer only\n");
 	  return 1;
	}
	
	if(size <= 0)
	{
		printf("Size should be greater than zero\n");
		return 1;
	}

	int *p=NULL;

	p=calloc(size,sizeof(int));

	if(p != NULL)
	{
		if(Read_array(p,size) == 1)
		{
			printf("Invalid input enter integer only\n");
			free(p);
			return 1;
		}

		printf("Entered values are\n");

		print_array(p,size);

		printf("After the sorting in descending order\n");

		sort_descending(p,size);

		print_array(p,size);

	}

	else
	{
		printf("Memory Allocation Failed\n");
	}

	return 0;
}

void print_array(int *array,int size)
{
	
	for(int i=0;i<size;i++)
	{
		printf("%d ",array[i]);
	}
	printf("\n");
}

int Read_array(int *array,int size)
{
	printf("Enter the value\n");
	for(int i=0;i<size;i++)
	{
		printf("Enter the value-%d\n",i+1);
		if(scanf("%d",&array[i]) != 1)
		{
			return 1;
		}
	}

	return 0;
}

void sort_descending(int *array,int size)
{
  int i,j,last_swap,new_swap,flag,temp;
  last_swap=size-1;
  for(i=0;i<size -1;i++)
  {
	  flag=0;
	  for(j=0;j<last_swap;j++)
	  {
		  if(array[j] < array[j+1])
		  {
			  temp=array[j];
			  array[j]=array[j+1];
			  array[j+1]=temp;
			  flag=1;
			  new_swap=j;
		  }

	  }
	  if(flag == 0)break;
	  last_swap=new_swap;
  }

}

