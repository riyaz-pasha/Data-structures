#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *nextNode;
};

void push(struct Node **, int);
void printListUsingRecursion(struct Node *node);
void reverseLinkedList(struct Node **);

int main(int argc, char const *argv[])
{
    struct Node *head_node;
    push(&head_node, 5);
    push(&head_node, 4);
    push(&head_node, 3);
    push(&head_node, 2);
    push(&head_node, 1);
    printListUsingRecursion(head_node);

    reverseLinkedList(&head_node);
    printListUsingRecursion(head_node);

    push(&head_node, 6);
    printListUsingRecursion(head_node);
    return 0;
}

void reverseLinkedList(struct Node **head_node_ref)
{
    struct Node *prev_node = NULL,
                *current_node = *head_node_ref,
                *next_node = NULL;
    while (current_node != NULL)
    {
        next_node = current_node->nextNode;

        current_node->nextNode = prev_node;

        prev_node = current_node;
        current_node = next_node;
    }
    *head_node_ref = prev_node;
}

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
    return printListUsingRecursion(node->nextNode);
}