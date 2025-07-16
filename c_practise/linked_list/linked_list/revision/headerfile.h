#pragma once
#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
        struct node *prev;
        int data;
        struct node *next;
}node;


node *create_node(void);
node *insert_end(node *start);
node *insert_beg(node *start);
node *insert_pos(node *start);
void display(const node *start);

