#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>


struct Node {
    double value;
    struct Node *next;
};

struct LinkedList {
    struct Node *head;
    struct Node *tail;
    unsigned int length;
};


struct LinkedList *createLinkedList(void) {
    struct LinkedList *list = malloc(sizeof(struct LinkedList));
    assert(list != NULL);
    list->head = list->tail = NULL;
    list->length = 0;
    return list;
}


struct LinkedList *clearLinkedList(struct LinkedList *list) {
    assert(list != NULL && list->head != NULL);
    struct Node *node = list->head;
    while (node != NULL) {
        struct Node *next = node->next;
        free(node);
        node = next;
    }
    list->head = list->tail = NULL;
    list->length = 0;
    return list;
}

void deleteLinkedList(struct LinkedList **list) {
    assert(*list != NULL);
    if ((*list)->head != NULL) {
        clearLinkedList(*list);
    }
    free(*list);
    *list = NULL;
}

struct Node *appendLinkedList(struct LinkedList *list, double value) {
    assert(list != NULL);
    struct Node *newNode = malloc(sizeof(struct Node));
    assert(newNode != NULL);
    newNode->value = value;
    newNode->next = NULL;
    if (list->tail == NULL) {
        assert(list->head == NULL && list->length == 0);
        list->head = list->tail = newNode;
    }
    else {
        list->tail->next = newNode;
        list->tail = newNode;
    }
    list->length++;
    return newNode;
}


void printLinkedList(const struct LinkedList *list) {
    assert(list != NULL);
    for (struct Node *node = list->head; node != NULL; node = node->next) {
        printf("%.2f ", node->value);
    }
}


static void swapDouble(double *x, double *y) {
    assert(x != NULL && y != NULL);
    if (x == y) return;
    double temp = *x;
    *x = *y;
    *y = temp;
}


void sortLinkedList(struct LinkedList *list) {
    assert(list != NULL);
    bool swap_occurred;
    unsigned int N_i = list->length;
    do {
        swap_occurred = false;
        struct Node *node = list->head;
        for (unsigned int i = 0; i < N_i - 1; i++, node = node->next) {
            if (node->value > node->next->value) {
                swapDouble(&node->value, &node->next->value);
                swap_occurred = true;
            }
        }
        N_i--;
    } while (swap_occurred);
}

#endif //LINKED_LIST_H