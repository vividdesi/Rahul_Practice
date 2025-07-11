#include <stdio.h>
#include<stdlib.h>
typedef struct node {
  struct node *prev;
  int data;
  struct node *next;
}node;

node *create_node()
{ 
    int data;
    node *temp=NULL;
    printf("Enter the data\n");
    scanf("%d",&data);
    temp=malloc(sizeof(node));
    temp->prev=NULL;
    temp->data=data;
    temp->next=NULL;
    return temp;
}

node *insert_end(node *start)
{
    node *temp=NULL,*p=start;
    temp=create_node();
    if(start == NULL)
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
        temp->prev=p;
        return start;
    }
}

void display(node *start)
{
    printf("NULL->");
    while(start != NULL)
    {
        printf(" <-%d-> ",start->data);
        start=start->next;
    }
    printf("NULL\n");
}

node *insert_beg(node *start)
{
	printf("Add data at the beginnig\n");
	node *temp=create_node();
	if( start != NULL)
	{
		temp->next=start;
		start->prev=temp;
	}
	start=temp;
	return start;
}
int main() {
 node *start=NULL;
 for(int i=0;i<4;i++)
 {
     start=insert_end(start);
 }
 display(start);

 start=insert_beg(start);
 display(start);

    return 0;
}
