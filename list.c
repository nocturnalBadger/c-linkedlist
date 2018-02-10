#include "node.h"
#include<stdio.h>

struct node *head = NULL;

void addToList(int value)
{
    if (!head) {
        head = newNode(value);
        return;
    }

    struct node *current = head;
    while (current->next) {
        current = current->next;
    }
    current->next = newNode(value);
}


void removeFromList(int index)
{
    if (index == 0) {
        struct node *formerHead = head;
        head = head->next;
        free(formerHead);
        return;
    }

    int i = 0;
    struct node *current = head;
    while (current->next && i < index - 1) {
        current = current->next;
        i++;
    }
    struct node *removed = current->next;
    current->next = removed->next;
    free(removed);
}

int getListItem(int index)
{
    int i = 0;
    struct node *current = head;
    while (current && i < index) {
        current = current->next;
        i++;
    }

    return current ? current->value : -1;
}

void printList()
{
    struct node *current = head;
    while (current != NULL) {
        int value = current->value;
        printf("%u -> ", value);
        current = current->next;
    }
    printf("NULL\n");
}


