#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node *next;
} Node;

void add_node(Node *head, int value) {
    Node *new_node = malloc(sizeof(Node));
    new_node->data = value;
    new_node->next = NULL;

    Node *p = head;
    while (p->next != NULL) {
        p = p->next;
    }
    p->next = new_node;
}

int sum_list(Node *head) {
    int sum = 0;
    Node *p = head;
    while (p != NULL) {
        sum += p->data;
        p = p->next->next;  // ❌ Bug: skipping nodes incorrectly
    }
    return sum;
}

int main() {
    Node *head = malloc(sizeof(Node));
    head->data = 10;
    head->next = NULL;

    add_node(head, 20);
    add_node(head, 30);

    int total = sum_list(head);  // Will cause segmentation fault
    printf("Total = %d\n", total);
    return 0;
}

