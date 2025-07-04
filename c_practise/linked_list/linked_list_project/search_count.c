#include<stdio.h>
#include"headerfile.h"


int  count_nodes(const node *t)
{
	int i,count=0;
	if(t == NULL)
	{
		printf("List is empty\n");
	}
	else
	{
		while(t != NULL)
		{
			count++;
			t=t->next;
		}
		printf("The count value is %d\n",count);
	}
	return count;
}


void search_node(const node *t,int data)
{    
	 int i;
     if(t == NULL)
     {
	     printf("The List is empty\n");
     }
     else
     {
	     for(i=0;t != NULL; i++,t=t->next)
	     {
		     if(t->data == data)
		     {
			printf("The data is %d at position %d\n",t->data,i);
			return ;

		     }

		     
	     }

	     printf("Data not found\n");
     }
	
}	
