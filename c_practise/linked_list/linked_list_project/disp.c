#include<stdio.h>
#include"headerfile.h"

void display_nodes(const node * t)
{
	int i;
	if( t == NULL)
	{
		printf("The List is empty\n");
	}

	else
	{
		while(t != NULL)
		{
			printf("%d->",t->data);
			t=t->next;
		}
		printf("NULL\n");
	}

}
