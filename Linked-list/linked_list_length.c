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
    return;
}

void printListRecusrion(struct Node *node)
{
    if (node == NULL)
        return;
    printf("%d\n", node->data);
    return printListRecusrion(node->nextNode);
}

int getLength(struct Node *node)
{
    int length = 0;
    while (node != NULL)
    {
        length += 1;
        node = node->nextNode;
    }
    return length;
}

int getLengthUsingRecursion(struct Node *node)
{
    if (node == NULL)
        return 0;
    return 1 + getLengthUsingRecursion(node->nextNode);
}

int main(int argc, char const *argv[])
{
    struct Node *head_node;

    printf("Length : %d\n", getLength(head_node));
    printf("getLengthUsingRecursion : %d\n", getLengthUsingRecursion(head_node));
    printf("\n**************************************************************\n");

    push(&head_node, 5);
    printListRecusrion(head_node);
    printf("Length : %d\n", getLength(head_node));
    printf("getLengthUsingRecursion : %d\n", getLengthUsingRecursion(head_node));
    printf("\n**************************************************************\n");

    push(&head_node, 4);
    push(&head_node, 3);

    printListRecusrion(head_node);
    printf("Length : %d\n", getLength(head_node));
    printf("getLengthUsingRecursion : %d\n", getLengthUsingRecursion(head_node));
    printf("\n**************************************************************\n");

    push(&head_node, 2);
    push(&head_node, 1);

    printListRecusrion(head_node);
    printf("Length : %d\n", getLength(head_node));
    printf("getLengthUsingRecursion : %d\n", getLengthUsingRecursion(head_node));
    printf("\n**************************************************************\n");

    return 0;
}
