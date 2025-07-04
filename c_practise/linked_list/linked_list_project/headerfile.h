#ifndef HEADERFILE_H
#define HEADERFILE_H

#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int data;
    struct node *next;
} node;

void display_nodes(const node* t);
int  count_nodes(const node *t);
void search_node(const node *t,int data);
node *create_node(void);
node *insert_node(node *start);
node *insert_beg(node *start);
node *insert_after(node *start,int item);
node *insert_before(node *start,int item);
node *insert_pos(node *start,int pos);
node *del_data(node *start,int data);
#endif

