#include "list.h"
#include<stdio.h>

int main()
{
    printList();

    addToList(2);
    printList();
    addToList(4);
    printList();
    addToList(6);
    printList();

    int item = getListItem(1);
    printf("%u\n", item);

    item = getListItem(5);
    printf("%d\n", item);

    removeFromList(1);
    printList();

    addToList(8);
    printList();

    removeFromList(1);
    printList();

    removeFromList(1);
    printList();
}
