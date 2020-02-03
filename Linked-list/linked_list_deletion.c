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

void deleteNode(struct Node **head_node_ref, int delete_node_data)
{
    struct Node *temp = *head_node_ref, *prev_node;
    if (temp != NULL && temp->data == delete_node_data)
    {
        *head_node_ref = temp->nextNode;
        free(temp);
        return;
    }

    while (temp != NULL && temp->data != delete_node_data)
    {
        prev_node = temp;
        temp = temp->nextNode;
    }

    if (temp == NULL)
        return;
    prev_node->nextNode = temp->nextNode;
    free(temp);
    return;
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
    printf("\n**************************************************************\n");

    deleteNode(&headNode, 5);

    printList(headNode);
    printf("\n**************************************************************\n");

    deleteNode(&headNode, 1);

    printList(headNode);
    printf("\n**************************************************************\n");

    deleteNode(&headNode, 3);

    printList(headNode);
    printf("\n**************************************************************\n");

    return 0;
}
