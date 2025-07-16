#include"headerfile.h"

void display(const node *start)
{
	if(start == NULL)
	{
		printf("Linked list empty\n");
		return ;
	}
	while(start != NULL)
	{
		printf("<- %d ->",start->data);
		start=start->next;
	}
	printf(" NULL\n");
}
