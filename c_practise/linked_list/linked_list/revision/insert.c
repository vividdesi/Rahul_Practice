#include"headerfile.h"

node *create_node( )
{
	printf("hi .................\n");
        node *temp=NULL;
        temp=malloc(sizeof(node));
        if(temp == NULL)
        {
                printf("Memory Allocation failed\n");
                return NULL;
        }

        else
        {
                int data;
                printf("Enter the value\n");
                scanf("%d",&data);
                temp->prev=NULL;
                temp->data=data;
                temp->next=NULL;
                return temp;
        }
}       

node *insert_end(node *start)
{       
        
	node *temp=create_node();
	
	if(temp == NULL)
	{
	   printf("Exiting the programme\n");
	   exit(0);
	}
	
	else if( start == NULL)
	{ 
		return temp;
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


node *insert_beg(node *start)
{
	
	node *temp=create_node();
	if(temp == NULL)
	{
	   printf("Exiting the programme\n");
	   exit(0);
	}
	
	else if( start == NULL)
	{ 
		return temp;
	}
	
	else
	{
		temp->next=start;
		start->prev=temp;
		start=temp;
		return start;
	}

}

node *insert_pos(node *start)
{

	int pos;
	display(start);
	printf("Enter the position you want to delete\n");
	scanf("%d",&pos);
	while(
}
