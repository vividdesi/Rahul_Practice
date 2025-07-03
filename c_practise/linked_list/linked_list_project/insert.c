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
