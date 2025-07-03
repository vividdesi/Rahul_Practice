#include<stdio.h>
#include<stdlib.h>
#include"headerfile.h"

node *create_node()
{
	int data;
	node *temp=NULL;
	printf("Enter the data \n");
	scanf("%d",&data);
	temp=malloc(sizeof(node));

	if(temp == NULL)
	{
		printf("Memory allocation failed\n");
		return NULL;
	}

	else
	{
		temp->data=data;
		temp->next=NULL;
	}

	return temp;
}
