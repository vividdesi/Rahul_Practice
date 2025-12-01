#include<stdio.h>

typedef struct array{
	int arr[5];
}s;

void print(s ar,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",ar.arr[i]);
	}
	printf("\n");
}

void modify(s arr)
{
	arr.arr[0]=100;
	printf("Inside the modify function\n");
	print(arr,5);
}

void print_pointer(int *ar,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",ar[i]);
	}
	printf("\n");
}

void modify_pointer(s *ar)
{
	ar->arr[0]=100;
	printf("Inside the modify_pointer function\n");
	print_pointer(ar->arr,5);
}


int main(void)
{
	s arr={{1,2,3,4,5}};
	print(arr,5);
	modify(arr);
	printf("outside of modified function\n");
	print(arr,5);
	printf("sending the starting address of array \n");
	modify_pointer(&arr);
	print(arr,5);
	return 0;
}
