#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *nextNode;
};
//global head pointer
struct Node *head_node;

void pushAsHead(int data)
{
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->data = data;
    new_node->nextNode = head_node;
    head_node = new_node;
}

void printList()
{
    struct Node *node = head_node;
    while (node != NULL)
    {
        printf("%d\n", node->data);
        node = node->nextNode;
    }
    return;
}

int main(int argc, char const *argv[])
{
    pushAsHead(5);
    pushAsHead(4);
    pushAsHead(3);
    pushAsHead(2);
    pushAsHead(1);

    printList();
    printf("\n**************************************************************\n");

    return 0;
}
