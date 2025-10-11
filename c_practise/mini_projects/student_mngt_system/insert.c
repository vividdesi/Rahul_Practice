#include"header.h"
#include<stdio.h>

extern int length;
student* insert_begin(student * start)
{
	student *temp=NULL;

	temp=create_node();
	if(temp != NULL)
	{
		temp->next=start;
		start=temp;
		return start;
	}

	else
	{
		return start;
	}

}

student* insert_end(student *start)
{
	student *temp=NULL;
	temp=create_node();

	if(start == NULL)
	{
		return temp;
	}

	if(temp != NULL)
	{
		student *p=start;
		while(p->next != NULL)
		{
			p=p->next;
		}
		p->next=temp;
		return start;
	}

	else
	{
		return start;
	}
}

student* insert_at_position(student *start)
{
	uint8_t position=0;

	printf("The number of nodes are %d\n",length);
	printf("Enter the position you want to add node\n");
	scanf("%hhu",&position);

	if(position > (length-1)) 
	{
		printf("The position is more then nodes\n");
		return start;
	}

	if(position == 1)
	{
		start=insert_begin(start);
		return start;

	}

	student *p=NULL;
	p=start;
	int pos=0;
	student *temp=create_node();

	if( temp != NULL)
	{

		while( p->next != NULL)
		{
			if((position-1) == pos)
			{
				temp->next=p->next;
				p->next=temp;
				return start;
			}
			pos++;
			p=p->next;
		}
	}

		else
		{
			return start;
		}

 return start;
}


student * (*insert_fun[])(student *)={insert_begin,insert_end,insert_at_position};

