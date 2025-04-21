#include<stdio.h>
#include<stdlib.h>

void sort_array(int *p,int n);
void Ascending_order_disp(int *p,int n);
void Descending_order_disp(int *p,int n);
void print(int *p,int n);
int  insert(int *p,int n);

int main(void)
{
	int size;
	printf("Enter the size to allocate in array\n");
	if(scanf("%d",&size) != 1)
	{
		printf("Invalid value datatype\n");
		return 1;
	}
	if(size <= 0)
	{
		printf("Size should be greater than Zero\n");
		return 1;
	}
	int *p=NULL;
	p=malloc(size * sizeof(*p));
	if( p != NULL)
	{
		if(insert(p,size) == 1)
		{
			printf("Invalid datatype entry\n");
			free(p);
			return 1;
		}
		printf("Entered values are\n");
		print(p,size);
		sort_array(p,size);
		print(p,size);
		Ascending_order_disp(p,size);
		Descending_order_disp(p,size);
		free(p);
	}
	else
	{
		printf("Memory Allocation failed\n");
	}

	
	return 0;
}

void sort_array(int *p,int n)
{
	printf("The sorted array values are\n");
	int i,j,new_swap=0,last_swap=0,flag=0,temp=0;
	last_swap=n;
	for(i=0;i<n-1;i++)
	{
		flag=0;
		for(j=0;j<last_swap;j++)
		{
			if(p[j] > p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;
				flag=1;
				new_swap=j;
			}
		}
		if(flag == 0)break;
		last_swap=new_swap;
	}

}

void Ascending_order_disp(int *p,int n)
{
	printf("The values in Ascending order\n");
	for(int i=0;i<n;i++)
        {
                printf("%d ",p[i]);
        }
        printf("\n");

}

void Descending_order_disp(int *p,int n)
{
	printf("The values in descending order\n");
	 for(int i=n-1;i>=0;i--)
        {
                printf("%d ",p[i]);
        }
        printf("\n");

}

void print(int *p,int n)
{
	
	for(int i=0;i<n;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");
}

int  insert(int *p,int n)
{
   printf("Enter the values\n");
   for(int i=0;i<n;i++)
   {
	  if( scanf("%d",&p[i]) != 1)
	  {
		  return 1;
	  }
   }
   return 0;
}

