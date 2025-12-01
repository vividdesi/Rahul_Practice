// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>

typedef struct list{
    int data;
    struct list *next;
}list;

list* create_node();
list *insert_end(list *start);
list *insert_beg(list* start);
void display(list* start);
int main() {
    
    list *start=NULL;
    for(int i=0;i<4;i++)start=insert_end(start);
    display(start);
    start=insert_beg(start);
    display(start);
    return 0;
}

list* create_node()
{
    list *temp=NULL;
    int data;
    printf("Enter the digit\n");
    scanf("%d",&data);
    temp=malloc(sizeof(list));
    if(temp != NULL)
    {
    temp->data=data;
    temp->next=NULL;
    return temp;
    }
    else
    {
        printf("Memory allocation failed\n");
    }
    
}

list *insert_end(list *start)
{
    list *temp=NULL;
    temp=create_node();
    if(start == NULL)start=temp;
    else
    {
        list *p=start;
        while(p->next != NULL)p=p->next;
        p->next=temp;
        return start;
    }
}

list *insert_beg(list* start)
{
    list *temp=NULL;
    temp=create_node();
    if(start == NULL)start=temp;
    else
    {
       temp->next=start;
       start=temp;
       return start;
    }
}

void display(list* start)
{
    list *p=start;
    while( p!=NULL)
    {
        printf("%d -> ",p->data);
        p=p->next;
    }
    printf("NULL\n");
}



