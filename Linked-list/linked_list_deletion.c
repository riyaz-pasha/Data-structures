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

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d\n", node->data);
        node = node->nextNode;
    }
}

int main(int argc, char const *argv[])
{
    struct Node *headNode;
    push(&headNode, 5);
    push(&headNode, 4);
    push(&headNode, 3);
    push(&headNode, 2);
    push(&headNode, 1);

    printList(headNode);
    return 0;
}
