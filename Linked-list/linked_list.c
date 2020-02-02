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

    return 0;
}
