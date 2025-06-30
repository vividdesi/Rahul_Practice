#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
}node;

node *create_node(int data)
{
    node *new_node=malloc(sizeof(*new_node));
    new_node->data=data;
    new_node->next=NULL;
    return new_node;
}

int main(void)
{
    node *node1=create_node(10);
    node *node2=create_node(20);
    node1->next=node2;
    node *temp=node1;
    while(temp != NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    return 0;
}

