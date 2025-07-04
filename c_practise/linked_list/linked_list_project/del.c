#include"headerfile.h"

node *del_data(node  *start,int data)
{

	node *temp=NULL,*p=NULL;
	if(start -> data == data)
	
	{
		temp=start;
		start=start->next;
		free(temp);
		return start;
	}

	p=start;
	if(p == NULL)
	{
		printf("Empty list\n");
		return NULL ;
	}
	else
	{
		while( p->next->data != data)
		{
			p=p->next;
		}

		temp=p->next;
		p->next=temp->next;
		free(temp);
		return start;

	}
}
