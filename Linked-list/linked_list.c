#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node *nextNode;
};

void push(struct Node **headNode_ref, int new_data)
{
    // printf("---------------in push-----------\n");
    // printf("headNode_ref-%p\n", headNode_ref);
    // printf("*headNode_ref-%p\n", *headNode_ref);
    // printf("--------------------------\n");
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->nextNode = *headNode_ref;
    *headNode_ref = new_node;
}

void append(struct Node **headNode_ref, int new_data)
{
    //headNode_ref--- head node address-- this will be constant
    //*headNode_ref== headnode -current head node -- this will vary whenever head node changes
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    struct Node *last_node = *headNode_ref;
    new_node->data = new_data;
    new_node->nextNode = NULL;

    if (*headNode_ref == NULL)
    {
        *headNode_ref = new_node;
        return;
    }

    while (last_node->nextNode != NULL)
        last_node = last_node->nextNode;
    last_node->nextNode = new_node;
    return;
}

void insertAfter(struct Node *prev_node, int new_data)
{
    if (prev_node == NULL)
    {
        printf("Previous node cannot be null");
        return;
    }

    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = new_data;
    new_node->nextNode = prev_node->nextNode;
    prev_node->nextNode = new_node;
    return;
}

int main(int argc, char const *argv[])
{
    struct Node *headNode = NULL;
    printf("&headNode-%p\n", &headNode);

    push(&headNode, 11);
    printf("headNode->data-%d\n", headNode->data);
    printf("headNode-%p\n", headNode);
    printf("\n**************************************************************\n");

    push(&headNode, 22);
    printf("headNode->data-%d\n", headNode->data);
    printf("headNode-%p\n", headNode);
    printf("headNode->nextNode-%p\n", headNode->nextNode);

    printf("\n**************************************************************\n");

    append(&headNode, 33);
    printf("headNode->nextNode->nextNode->data-%d\n", headNode->nextNode->nextNode->data);

    printf("\n**************************************************************\n");

    insertAfter(headNode->nextNode->nextNode, 44);
    printf("headNode->nextNode->nextNode->nextNode->data-%d\n", headNode->nextNode->nextNode->nextNode->data);

    printf("\n**************************************************************\n");

    return 0;
}
