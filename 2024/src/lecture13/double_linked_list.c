#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


struct StringNode {
    char *data;
    struct StringNode *next;
    struct StringNode *prev;
};

struct StringNode *insertNodeRight(struct StringNode *node_ptr, const char *str) {
    struct StringNode *new_node = malloc(sizeof(struct StringNode));  // allocate memory to store new node
    assert(new_node);
    new_node->data = malloc(sizeof(char) * (strlen(str) + 1));
    assert(new_node->data);
    strcpy(new_node->data, str);
    if (node_ptr != NULL) {
        // link newly created node to current node's linked node
        new_node->next = node_ptr->next;
        new_node->prev = node_ptr;
        // link current node to newly created node
        node_ptr->next = new_node;
        // link next node back to newly created node
        if (new_node->next != NULL) {
            new_node->next->prev = new_node;
        }
    }
    return new_node;
}


struct StringNode *insertNodeLeft(struct StringNode *node_ptr, const char *str) {
    struct StringNode *new_node = malloc(sizeof(struct StringNode));  // allocate memory to store new node
    assert(new_node);
    new_node->data = malloc(sizeof(char) * (strlen(str) + 1));        // allocate memory to store string data
    assert(new_node->data);
    strcpy(new_node->data, str);
    if (node_ptr != NULL) {
        // link newly created node to current node's linked node
        new_node->next = node_ptr;
        new_node->prev = node_ptr->prev;
        // link current node to newly created node
        node_ptr->prev = new_node;
        // link next node back to newly created node
        if (new_node->prev != NULL) {
            new_node->prev->next = new_node;
        }
    }
    return new_node;
}


void printfLL(const struct StringNode *node_ptr) {
    while (node_ptr != NULL) {
        printf("%s ", node_ptr->data);
        node_ptr = node_ptr->next;
    }
    printf("\n");
}


void rprintfLL(const struct StringNode *node_ptr) {
    while (node_ptr != NULL) {
        printf("%s ", node_ptr->data);
        node_ptr = node_ptr->prev;
    }
    printf("\n");
}


void freeLL(struct StringNode **node_ptr_ptr) {
    struct StringNode *node_ptr = *node_ptr_ptr;
    while (node_ptr != NULL) {
        struct StringNode *next_node_ptr = node_ptr->next;
        // free the memory reserved for data member (the string)
        free(node_ptr->data);
        // free the memory reserved for the node
        free(node_ptr);
        node_ptr = next_node_ptr;
    }
    *node_ptr_ptr = NULL;
}


int main() {
    struct StringNode *HEAD = NULL, *TAIL = NULL;

    HEAD = TAIL = insertNodeRight(NULL, "Hello");
    TAIL = insertNodeRight(TAIL, "World");
    insertNodeRight(HEAD, "to_the");
    HEAD = insertNodeLeft(HEAD, "Yo,");  // HW problem! Can you write this code?

    printfLL(HEAD);   // Output: Yo, Hello to_the World
    rprintfLL(TAIL);  // Output: World to_the Hello Yo,

    printf("HEAD == NULL? %d\n", HEAD == NULL);  // Output: HEAD == NULL? 0
    freeLL(&HEAD);    // tidy our mess
    printf("HEAD == NULL? %d\n", HEAD == NULL);  // Output: HEAD == NULL? 1
    // HEAD was passed by reference to freeLL and assigned to NULL
    TAIL = NULL;

    return 0;
}
