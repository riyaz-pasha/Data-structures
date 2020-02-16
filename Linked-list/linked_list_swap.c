#include "LinkedListUtil.h"

void swapNodes(struct Node **head_node_ref, int x, int y)
{
    if (x == y)
        return;
    struct Node *prev_node_of_x = NULL, *current_x_node = *head_node_ref;
    while (current_x_node && current_x_node->data != x)
    {
        prev_node_of_x = current_x_node;
        current_x_node = current_x_node->nextNode;
    }

    struct Node *prev_node_of_y = NULL, *current_y_node = *head_node_ref;
    while (current_y_node && current_y_node->data != y)
    {
        prev_node_of_y = current_y_node;
        current_y_node = current_y_node->nextNode;
    }

    if (current_x_node == NULL || current_y_node == NULL)
        return;

    if (prev_node_of_x != NULL)
        prev_node_of_x->nextNode = current_y_node;
    else
        *head_node_ref = current_y_node;

    if (prev_node_of_y != NULL)
        prev_node_of_y->nextNode = current_x_node;
    else
        *head_node_ref = current_x_node;

    struct Node *temp = current_x_node->nextNode;
    current_x_node->nextNode = current_y_node->nextNode;
    current_y_node->nextNode = temp;

    return;
}

int main(int argc, char const *argv[])
{
    struct Node *head_node;
    push(&head_node, 5);
    push(&head_node, 4);
    push(&head_node, 3);
    push(&head_node, 2);
    push(&head_node, 1);
    printList(head_node);

    swapNodes(&head_node, 2, 4);
    printListUsingRecursion(head_node);
    return 0;
}
