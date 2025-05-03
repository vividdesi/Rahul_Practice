#include<stdio.h>

int largest_second_element(int *p,int size);

int main(void)
{
	int a[]={1,2,3,4,5};
	printf("The largest second element is %d\n",largest_second_element(a,5));
	return 0;
}

int largest_second_element(int *p,int size)
{
	int first=p[0],second=p[0];
	for(int i=0;i<size;i++)
	{
		if(first  < p[i +1])
		{
			second=first;
			first=p[i+1];
		}
	}
	return second;
}

