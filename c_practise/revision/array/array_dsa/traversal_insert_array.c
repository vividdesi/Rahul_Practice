#include<stdio.h>
#define MAX 20

void Display(int a[],int max)
{
	printf("Entered values are:");
	for(int i=0;i<max;i++)printf("%d ",a[i]);
	printf("\n");
}

void insert_elements(int a[],int max)
{
	for(int i=0;i<max;i++)
		scanf("%d",&a[i]);
}

int insert_end(int a[],int max,int capacity)
{
	max++;
	if(max == capacity)
	{
		printf("Array is Fulled\n");
		return max;
	}

	else
	{
		printf("Enter the value\n");
		scanf("%d",&a[max-1]);
	}

	return max;
}


int insert_pos(int a[],int max,int capacity,int pos)
{
	if(max == capacity)
	{
		printf("Array is full\n");
		return max;
	}

	if( pos < 1 || pos > max+1)
	{
		printf("Invalid input\n");
		return max;
	}

	else
	{
		int index=max,value;
		pos=--pos;
		
		while(index > pos)
		{
			a[index] = a[index - 1]; 
			index--;
		}

		printf("Enter the value\n");
		scanf("%d",&value);
		a[pos]=value;
		
		return max +1;
	}



}

int find_element(int a[],int n,int value)
{
	for(int i=0;i<n;i++)
	{
		if(a[i] == value)
		{
			return i;
		}
	}


	printf("value not found");
	return -1;
}

int delete_element(int a[],int max,int capacity,int key)
{
	int pos=find_element(a,max,key);

	if(pos == -1)printf("Value not found\n");

	for(int i=pos ;i<max-1;i++)
		a[i]=a[i+1];

	return max-1;
}
int main(void)
{
	int a[MAX];
	int max,capacity=sizeof(a)/sizeof(a[0]),pos;
	printf("Enter the maximum values you want to  enter below 20\n");
	scanf("%d",&max);
	printf("Enter the values\n");
	insert_elements(a,max);

	Display(a,max);

	printf("Insert the value at the end\n");
	max=insert_end(a,max,capacity);
	Display(a,max);


	printf("Enter the osition u want to insert the element and max position is %d\n",max);
	scanf("%d",&pos);

	max=insert_pos(a,max,capacity,pos);

	Display(a,max);

	int key;
	printf("Delete element value\n");
	scanf("%d",&key);
	max=delete_element(a,max,capacity,key);

	Display(a,max);




	return 0;
}
