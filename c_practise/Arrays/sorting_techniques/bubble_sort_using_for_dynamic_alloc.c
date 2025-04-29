#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int *p,int size);
void insert_data_array(int *p,int size);
void print_data_array(const int *p,int size);

int main(void)
{
	int size;
	printf("Enter the Size of the array to allocate\n");
	if(scanf("%d",&size) != 1 || size < 0)
	{
		printf("Enter the size greater than zero\n");
		return 1;
	}

	printf("Dynamically Allocating memory\n");
	int *p= NULL;

	p=calloc(size,sizeof(int));

	if(p)
	{
		printf("Insert  the data\n");
	        insert_data_array(p,size);
                
                printf("Entered values before sorting are\n");
		print_data_array(p,size);

                printf("The values after sorting\n");
		bubble_sort(p,size);
		print_data_array(p,size);

		free(p);
	}

	else
	{
		printf("Memory Allocation Failed\n");
	}
	return 0;
}

void bubble_sort(int *p,int size)
{
	int i,j,last_size,new_size,flag,temp;
	last_size=size - 1;
	for(i= 0;i < size-1;i++)
	{
		flag=0;
		for(j=0; j< last_size ; j++)
		{
			if(p[j] > p[j+1])
			{
				temp = p[j];
				p[j] = p[j+1];
				p[j+1]=temp;
				flag = 1;
				new_size=j;
			}
		}
		if( flag == 0) break;
		last_size=new_size;
	}
}


void insert_data_array(int *p,int size)
{
	for(int i=0 ; i < size ; i++)
	{
		printf("Enter the value-%d\n",i+1);
		while(scanf("%d",&p[i]) != 1 || p[i] < 0)
		{
			printf("Invalid Input\n");
			printf("Enter only positive integers only\n");
			while(getchar() != '\n');
		}
		
	}
}
void print_data_array(const int *p,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");
}

