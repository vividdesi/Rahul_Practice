#include<stdio.h>
#include"math.h"
#define size 4

char *op_string[size]={"Addition","subtraction","Multiplication","Exit"};

int (*fp[])(int,int)={add,sub,multi};

int main(void)
{
	int choice,i,a,b;

	while(1)
	{
		printf("\n");
		printf("Enter your choice\n");
		for(i=0;i<size;i++)
		printf("%d.%s\n",i+1,op_string[i]);
		printf("\n");
		scanf("%d",&choice);

		if(choice <1 || choice > size)
		printf("Invalid entry\n");

		else if(choice == 4)
		{
			printf("Thank you\n");
			break;
		}

		else
		{
			printf("Enter the a and b values\n");
			scanf("%d%d",&a,&b);
			int c=fp[choice -1 ](a,b);
			printf("The %s value of %d and %d is %d\n",op_string[choice-1],a,b,c);
		}

	}

}
