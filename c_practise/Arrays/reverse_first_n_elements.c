#include<stdio.h>
#include<stdlib.h>

void Insert(int *p,int size);
void Print(int *p,int size);
void Reverse_n(int *P,int n,int size);

int main(void)
{
  int size;
  printf("Enter the size to allocate\n");
  if(scanf("%d",&size) != 1)
  {
	  printf("Invalid datatype value\n");
	  return 1;
  }
  if(size<=0)
  {
	  printf("The value should be Greater than Zero\n");
	  return 1;
  }
  int *p= NULL;
  p=malloc(size*sizeof(*p));
  if(p != NULL)
  {
	  Insert(p,size);
	  Print(p,size);
	  int n;
	  printf("Enter the first n value u want to reverse\n");
	  scanf("%d",&n);
	  if(n < size)
	  { 
		  Reverse_n(p,n-1,size);
		  Print(p,size);
	  }
	  else 
	  {
		  printf("N value is more the size of array\n");
		  free(p);
	  }
	  free(p);
  }
  else
  {
	  printf("Memory Allocation failed\n");
  }
  return 0;
}

void Insert(int *p,int size)
{
	printf("Enter the values\n");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&p[i]);
	}
}

void Print(int *p,int size)
{
	printf("Entered values are\n");
	for(int i=0;i<size;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");
}

void Reverse_n(int *p,int n,int size)
{

	int j=0,k=n;
	n=n/2;
	while(j<n)
	{
		int temp=p[j];
		p[j]=p[k];
		p[k]=temp;
		j++;
		k--;
	}
}

