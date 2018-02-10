#include<stdlib.h>
#include "node.h"


struct node *newNode(int value)
{
    struct node *n = malloc(sizeof(struct node));
    n->next = NULL;
    n->value = value;
    return n;
}
