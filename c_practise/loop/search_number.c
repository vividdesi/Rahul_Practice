#include<stdio.h>

int main(void)
{
	int a[9]={1,2,3,4,5,0,-1,-9,-5};
	int search,i=0,flag=0;
	printf("ENter the number you want to search in array\n");
	scanf("%d",&search);
	while(i < 9)
	{
		if(search == a[i])
		{
			printf("The %d is found at index %d\n",search,i);
			flag=1;
			break;
		}

		if(search < 0)continue;
		i++;

	}

	if(flag ==0)
	printf("The number is not found\n");

	return 0;
}
