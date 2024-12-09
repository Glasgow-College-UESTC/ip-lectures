#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


struct IntNode {
    int value;
    struct IntNode *next;
};


int main() {
    struct IntNode node1 = {12, NULL};
    struct IntNode node2 = {99, NULL};
    struct IntNode node3 = {37, NULL};
    node1.next = &node2;
    node2.next = &node3;
    struct IntNode *HEAD = &node1;

    // for loop to traverse the linked list
    for (const struct IntNode *ptr = HEAD; ptr != NULL; ptr = ptr->next) {
        printf("%d\n", ptr->value);
    }

    return 0;
}
