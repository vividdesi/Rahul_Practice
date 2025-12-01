#include<stdio.h>

void swap_array(int *p,int *q,int size)
{
	int temp;
	for(int i=0; i<size ;i++)
	{
		temp=p[i];//*(p+i)
		p[i]=q[i];//*(p+i)=*(q+i)
		q[i]=temp;

	}

}
void display_data(int *p,int size)
{
	for(int i=0;i<size;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");

}

int main(void)
{
	int a[5]={1,2,3,4,5},b[5]={6,7,8,9,10};
	printf("The contents of a are\n");
	display_data(a,5);
	printf("The contents of b are\n");
	display_data(b,5);

	printf("swapping the arrray using pointers\n");
	swap_array(a,b,5);
	
	printf("The contents of a are\n");
	display_data(a,5);
	printf("The contents of b are\n");
	display_data(b,5);

	return 0;
}
