
#include <stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *next;
}node;

node *head=NULL,*tail=NULL;
node *create_node(int data);
void link_node(node *link);
void display_nodes();
void insert_node_pos(int alloc);
void delete_node_pos(int alloc);
node *reverse_sll(node *head)
{
	node *prev=NULL;
	node *cur=head;
	node *next=NULL;
	while(cur != NULL)
	{
		next=cur->next;
		cur->next=prev;
		prev=cur;
		cur=next;
	}
	return prev;
}
int main() {
  int nodes,data;
  node *temp=NULL;
  printf("Enter the size of the nodes u want to enter \n");
  scanf("%d",&nodes);
  for(int i=0;i<nodes;i++)
  {
      printf("Enter the number\n");
      scanf("%d",&data);
      temp=create_node(data);
      link_node(temp);
  }
    display_nodes();
    insert_node_pos(nodes);
    display_nodes();
    printf("Reversing the linked list\n");
    head=reverse_sll(head);
    display_nodes();
    delete_node_pos(nodes);
    display_nodes();
    return 0;
}

node *create_node(int data)
{
    node *temp=malloc(sizeof(node));
    temp->data=data;
    temp->next=NULL;
    return temp;
}
void link_node(node *link)
{
    if(head == NULL)
    {
        head=link;
        tail=link;
    }
    
    else
    {
        tail->next=link;
        tail=link;
    }
}
void display_nodes()
{
    node *disp=head;
    printf("Displaying linked nodes\n");
    while(disp != NULL)
    {
        printf("->%d",disp->data);
        disp=disp->next;
    }
    printf("->NULL\n");
}

void insert_node_pos(int alloc)
{
    int data, pos, i;
    node *temp, *s = NULL;
    printf("Enter the data\n");
    scanf("%d", &data);
    display_nodes();
    printf("Enter the position you want to insert the node\n");
    scanf("%d", &pos);
    
    if(pos < 0 || pos > alloc)
    {
        printf("Invalid position\n");
        return;
    }

    temp = create_node(data);
    if(pos == 0)
    {
        temp->next = head;
        head = temp;
        if (tail == NULL) { // If list was empty
            tail = temp;
        }
    }
    else
    {
        s = head;
        for(i = 1; i < pos && s != NULL; i++)
        {
            s = s->next;
        }
        if (s == NULL)
        {
            printf("Position out of bounds\n");
            free(temp);
            return;
        }
        temp->next = s->next;
        s->next = temp;

        // If inserted at the end, update tail
        if (temp->next == NULL)
            tail = temp;
    }
}

void delete_node_pos(int alloc)
{
    display_nodes();
    int pos, i;
    printf("Enter the position you want to delete:\n");
    scanf("%d", &pos);

    if (pos <= 0 || pos > alloc) {
        printf("Invalid position access\n");
        return;
    }

    // Deleting first node
    if (pos == 1) {
        node *temp = head;
        head = head->next;
        free(temp);
        return;
    }

    node *temp = head;

    // Traverse to node before the one to delete
    for (i = 1; i < pos - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    // Check if temp or temp->next is NULL
    if (temp == NULL || temp->next == NULL) {
        printf("Invalid position\n");
        return;
    }

    node *delete_node = temp->next;
    temp->next = delete_node->next;
    free(delete_node);
}


