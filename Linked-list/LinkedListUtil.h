#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *nextNode;
};
void push(struct Node **head_node_ref, int new_data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->nextNode = *head_node_ref;
    *head_node_ref = new_node;
}

void printListUsingRecursion(struct Node *node)
{
    if (node == NULL)
    {
        printf("\n**************************************************************\n");
        return;
    }
    printf("%d\n", node->data);
    printListUsingRecursion(node->nextNode);
}

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d\n", node->data);
        node = node->nextNode;
    }
    printf("\n**************************************************************\n");
}
// Commenting