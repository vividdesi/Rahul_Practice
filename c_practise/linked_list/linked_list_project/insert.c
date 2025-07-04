#include<stdio.h>
#include"headerfile.h"
node *insert_node(node *start)
{
	node *temp=NULL,*p=NULL;
	temp=create_node( );
	p=start;
	if(p == NULL)
	{
		start=temp;
		return start;
	}
	else
	{
	while(p -> next != NULL)
	{
		p=p->next;
	}
	p->next=temp;
	return start;
	}
}

node *insert_beg(node *start)
{
	node *temp=NULL,*p=NULL;
        temp=create_node( );
        p=start;
        if(p == NULL)
        {
                start=temp;
                return start;
        }
        else
        {
        temp->next=start;
	start=temp;
        return start;
        }

}

node *insert_after(node *start,int item)
{
	node *temp=NULL,*p=NULL;
        temp=create_node( );
        p=start;
        if(p == NULL)
        {
                start=temp;
                return start;
        }
        else
        {
		while(p->data != item)
		{
			p=p->next;
		}
	        temp->next=p->next;
	        p->next=temp;
	        return start;
        }
}

node *insert_before(node *start,int item)
{

	node *temp=NULL,*p=NULL;
	temp=create_node();
	p=start;
	if (p == NULL)
	{
		start == temp;
		return start;
	}

	if(item == p->data)
	{
		temp->next=p;
		start=temp;
		return start;
	}

	else
	{
		while(p->next->data != item)
		{
			p=p->next;
		}
		temp->next=p->next;
		p->next=temp;
		return start;
	}
}


node *insert_pos(node *start,int pos)
{

	node *temp=NULL,*p=NULL;
	int i=0,count;
	temp=create_node();
	p=start;
	count=count_nodes(start);
	if(pos < 0 || pos > count)
	{
		printf("Invalid position\n");
		return start;
	}
	if (p == NULL)
	{
		start == temp;
		return start;
	}

	else
	{
		if(pos ==0)
		{
			temp->next=p;
			start=temp;
			return start;
		}

		for(i=1;i< pos && p != NULL;i++)
		{
			p=p->next;
		}
		

		temp->next=p->next;
		p->next=temp;
		return start;
	}

}

