#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node* prev;
	struct node *next;
}node;

node *insert_end(node *start);
node *create_node(void);
void display(node* start); 

int main(void)
{

	node *start=NULL;
	for(int i=0;i<5;i++)
	{
		start=insert_end(start);
	}

	display(start);
	return 0;
}
node *insert_end(node *start)
{
	node *temp=create_node();
	if(temp == NULL)
	{
		printf("Memory allocation failed\n");
		//what should i do to donot destroy the linkdlist
	}

	else if(start == NULL)
	{
		start=temp;
		return start; 
	}

	else
	{
		node *p=start;
		while(p->next != NULL)
		{
			p=p->next;
		}
		p->next=temp;
		temp->prev=p;
		return start;
	}

}
node *create_node(void)
{
	node *temp=NULL;

	temp=malloc(sizeof(node));
	if(temp != NULL)
	{
		temp->prev=NULL;
		temp->next=NULL;
		printf("Enter the data\n");
		scanf("%d",&temp->data);
		return temp;
	}

	else
	{
	printf("Memory Allocation failed\n");
	return NULL;
	}

}
void display(node* start)
{
	node *p=start;
	printf("NULL");
	while(p != NULL)
	{
		printf(" <- %d ->",p->data);
		p=p->next;
	}
	printf("\n");
}


