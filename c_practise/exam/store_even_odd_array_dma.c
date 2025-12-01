#include<stdio.h>
#include<stdint.h>
#include<stdlib.h>

void Display(int *p,uint8_t size);

void min_max_array(int *p,uint8_t size);

void bubble_sort(int *p,uint8_t size);

int main(void)
{
	uint8_t size;
	printf("Enter the size\n");
	scanf("%hhu",&size);
	if(size > 0)//use less because here i am using unsigned
	{
		uint8_t i,evn=0,od=0,value;
		int *even=NULL,*odd=NULL;//making it as NUll to avoid wild pointer
		for(i=0;i<size;i++)
		{
		printf("Enter the value\n");
		scanf("%hhu",&value);

		if(value % 2 ==0)
		{
			if(even == NULL)
			{
				even=(int *)malloc(sizeof(int));
				even[evn++]=value;
			}
			else
			{
				even=(int *)realloc(even,(evn+1)*sizeof(int));
				even[evn++]=value;
			}
		}

		else
		{
			if(odd == NULL)
			{
				odd=(int *)malloc(sizeof(int));
				odd[od++]=value;
			}

			else
			{
				odd=(int *)realloc(odd,(od+1)*sizeof(int));
				odd[od++]=value;

			}
		}

		}
		printf("The even values are\n");
		Display(even,evn);
		printf("The odd values are \n");
		Display(odd,od);
                printf("Minimum and maximum value of even array =");
		min_max_array(even,evn);
                printf("Minimum and maximum value of odd array =");
		min_max_array(odd,od);
		printf("Sorting the even array\n");
		bubble_sort(even,evn);
		Display(even,evn);
		printf("Sorting the odd array\n");
		bubble_sort(odd,od);
		Display(odd,od);
		// At the end of main
	//	free(even);
	//	free(odd);

	}
	else
	{
		printf("Invalid size\n");
	}
	return 0;
}


void Display(int *p,uint8_t size)
{
	for(uint8_t i=0;i<size;i++)
	{
		printf("%d ",p[i]);
	}
	printf("\n");
}


void min_max_array(int *p,uint8_t size)
{
	int min=p[0],max=p[0];
	for(int i=0;i<size;i++)
	{
		if(min > p[i])min=p[i];
		if(max < p[i])max=p[i];
	}
	printf("%d %d\n",min,max);
}

void bubble_sort(int *p,uint8_t size)
{
	int last_swap=size-1,new_swap,flag,temp;

	for(int i=0;i<size-1;i++)
	{
		flag=0;
		for(int j=0;j < last_swap;j++)
		{
			if(p[j] > p[j+1])
			{
				temp=p[j];
				p[j]=p[j+1];
				p[j+1]=temp;

				new_swap=j;
				flag=1;
			}
		}
		if(flag == 0)break;
		last_swap=new_swap;
	}
}
