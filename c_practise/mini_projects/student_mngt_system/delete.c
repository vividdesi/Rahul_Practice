#include"header.h"
#include<stdio.h>
#include<stdlib.h>

extern int length;
student* delete_begin(student *start)
{
	if(start == NULL)
	{
		return NULL;
	}
	student* temp=NULL;
	temp=start;
	start=start->next;
	temp->next=NULL;
	free(temp);
	length--;
	return start;
}

student* delete_end(student *start)
{



	if(start == NULL)
	{
		return NULL;
	}

	else if(start->next == NULL)
	{
		free(start);
		return NULL;
	}

	student *p=start;

	while(p->next->next != NULL)
	{
		p=p->next;
	}
	free(p->next);
	p->next=NULL;
	length--;
	return start;

}

student* delete_at_position(student *start)
{
	if(start == NULL)return NULL;

	uint8_t position=0;

        printf("The number of nodes are %d\n",length);
        printf("Enter the position you want to add node\n");
        scanf("%hhu",&position);

        if(position > (length) || position < 1)
        {
                printf("Invalid position\n");
                return start;
        }

        if(position == 1)
        {
                start=delete_begin(start);
                return start;
        }

	if(position == (length))
	{
		start=delete_end(start);
		return start;
	}
	

		student *p=start;
		uint8_t pos=0;
		while(pos !=position && p->next != NULL)
		{
			p=p->next;
			pos++;
		}

		student *temp=NULL;
		temp=p->next;
		if(p->next->next != NULL)
		p->next=p->next->next;

		else
		{

		}
		temp->next=NULL;
		free(temp);
		length--;
		return start;

}

void free_all_nodes(student *start)
{
    student *temp;
    while (start != NULL)
    {
        temp = start;
        start = start->next;
	temp->next=NULL;
        free(temp);
    }
}
 student* (*del_fun[3])(student*)={delete_begin,delete_end,delete_at_position};

