#include<stdio.h>
#define ROW 2
#define COL 2

void addition_2d(int a[][COL],int b[][COL]);
void insert_elements(int a[][COL]);
void display_elements(int a[][COL]);

int main(void)
{

	int arr[ROW][COL];
	int arr1[ROW][COL];

	insert_elements(arr);
	insert_elements(arr1);

	printf("Elements in arr 2-D array are:\n");
	display_elements(arr);

	printf("Elements in arr1 2-D array are:\n");
	display_elements(arr1);

	printf("Doing the addition betwen the two arrays\n");
	addition_2d(arr,arr1);

	return 0;

}

void addition_2d(int a[][COL],int b[][COL])
{
	int i,j;
	int addition[ROW][COL];
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			addition[i][j]=a[i][j]+b[i][j];
		}
		
	}

	printf("The addition values are \n");
	display_elements(addition);

}

void insert_elements(int a[][COL])
{
	int i,j;
	printf("Insert elements\n");
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}

void display_elements(int a[][COL])
{
	int i,j;
	for(i=0;i<ROW;i++)
	{
		for(j=0;j<COL;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}

