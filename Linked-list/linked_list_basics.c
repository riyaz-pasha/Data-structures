#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int data;
    struct Node *nextNode;
};

void printList(struct Node *node)
{
    while (node != NULL)
    {
        printf("%d\n", node->data);
        node = node->nextNode;
    }
}

void printListUsingRecursion(struct Node *node)
{
    if (node == NULL)
        return;
    printf("%d\n", node->data);
    printListUsingRecursion(node->nextNode);
}

int main(int argc, char const *argv[])
{
    struct Node *headNode = NULL;
    struct Node *secondNode = NULL;
    struct Node *thirdNode = NULL;

    headNode = (struct Node *)malloc(sizeof(struct Node));
    secondNode = (struct Node *)malloc(sizeof(struct Node));
    thirdNode = (struct Node *)malloc(sizeof(struct Node));

    (*headNode).data = 11;
    headNode->nextNode = secondNode;

    (*secondNode).data = 22;
    secondNode->nextNode = thirdNode;

    (*thirdNode).data = 33;
    thirdNode->nextNode = NULL;

    printf("(*headNode).data-%d\n", (*headNode).data);
    printf("headNode->data-%d\n", headNode->data);
    printf("\n**************************************************************\n");
    printf("(*(*headNode).nextNode).data-%d\n", (*(*headNode).nextNode).data);
    printf("headNode->nextNode->data-%d\n", headNode->nextNode->data);
    printf("(*secondNode).data-%d\n", (*secondNode).data);
    printf("secondNode->data-%d\n", secondNode->data);
    printf("\n**************************************************************\n");
    printf("(*(*(*headNode).nextNode).nextNode).data-%d\n", (*(*(*headNode).nextNode).nextNode).data);
    printf("headNode->nextNode->nextNode->data-%d\n", headNode->nextNode->nextNode->data);
    printf("((*(*secondNode).next).data-%d\n", (*(*secondNode).nextNode).data);
    printf("secondNode->nextNode->data-%d\n", secondNode->nextNode->data);
    printf("(*thirdNode).data-%d\n", (*thirdNode).data);
    printf("thirdNode->data-%d\n", thirdNode->data);
    printf("\n**************************************************************\n");

    printList(headNode);
    printf("\n**************************************************************\n");
    printf("printing List Using Recursion\n");

    printListUsingRecursion(headNode);

    return 0;
}
