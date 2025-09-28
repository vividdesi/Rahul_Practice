#include<stdio.h>

int main(void)
{
	int a[9]={1,2,3,4,5,0,-1,-9,-5};
	int search,i=0;
	printf("ENter the number you want to search in array\n");
	scanf("%d",&search);
	while(i < 9)
	{
		if(search == a[i])
			goto found;
		
		else if( search < 0)
			goto negative;

		i++;

	}

	not_found:
		printf("The number is not found\n");
		return 0;

	found:
		printf("The %d found at %d index\n",search,i);
		return 0;

	negative:
		printf("Searched negative value\n");
		return 0;

	

}
