#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
	int data;
	struct node *next;
}node;

node *create_node(void);
node *insert_node(node *p);
void display(const node *p);
void mid(node *p);
void mid_delete(node *);
int main(void)
{
	node *start=NULL;
	for(int i=0;i<7;i++)
	{
		start=insert_node(start);
	}
	display(start);
	mid(start);
	mid_delete(start);
	display(start);
	return 0;
}

node *create_node(void)
{
	node *temp=NULL;
	temp=malloc(sizeof(node));
	if(temp != NULL)
	{
	printf("Enter the data\n");
	scanf("%d",&temp->data);
	temp->next=NULL;
	return temp;
	}
	else
	{
		printf("Memory is not allocated\n");
	}
}
node *insert_node(node *start)
{   
	node *temp=NULL,*p=start;
	temp=create_node();
	if(p == NULL)
	{
		start=temp;
		return start;
	}

	else
	{
		while(p->next != NULL)
		{
			p=p->next;
		}
		p->next=temp;
		return start;
	}

}
void display(const node *p)
{
	while(p != NULL)
	{ 
		printf("%d->",p->data);
		p=p->next;
	}
	printf("NULL\n");
}
void mid(node *p)
{
	if(p == NULL)
	{
		printf("List is empty\n");
		return ;
	}
	node *slow=p,*fast=p;
	while(fast != NULL && fast->next != NULL)
	{
		fast=fast->next->next;
		slow=slow->next;
	}
	printf("The mid value is %d\n",slow->data);
}
void mid_delete(node *p)
{
	if(p == NULL)
	{
		printf("List is empty\n");
		return ;
	}

	node *slow=p,*fast=p,*prev=p;
	while(fast != NULL && fast->next != NULL)
	{
		fast=fast->next->next;
		prev=slow;
		slow=slow->next;
	}
	printf("The mid value is %d\n",slow->data);
	printf("Deleting the mid value\n");
	prev->next=slow->next;
	slow->next=NULL;
	free(slow);

}
