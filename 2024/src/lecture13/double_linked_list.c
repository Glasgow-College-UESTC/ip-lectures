#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>


struct StringNode {
    char *data;
    struct StringNode *next;
    struct StringNode *prev;
};

struct StringNode *insertNodeRight(struct StringNode *node_ptr, const char *string) {
    struct StringNode *new_node = malloc(sizeof(struct StringNode));  // allocate memory to store new node
    assert(new_node);
    new_node->data = malloc(sizeof(char) * (strlen(string) + 1));
    assert(new_node->data);
    strcpy(new_node->data, string);
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


struct StringNode *insertNodeLeft(struct StringNode *node_ptr, const char *string) {
    struct StringNode *new_node = malloc(sizeof(struct StringNode));  // allocate memory to store new node
    assert(new_node);
    new_node->data = malloc(sizeof(char)    * (strlen(string) + 1));
    assert(new_node->data);
    strcpy(new_node->data, string);
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
        free(node_ptr->data);
        free(node_ptr);
        node_ptr = next_node_ptr;
    }
    *node_ptr_ptr = NULL;
}


int main() {
    struct StringNode *HEAD = NULL;
    struct StringNode *TAIL = NULL;

    HEAD = TAIL = insertNodeRight(HEAD, "Hello");

    printfLL(HEAD);
    rprintfLL(HEAD);

    TAIL = insertNodeRight(TAIL, "World");

    printfLL(HEAD);
    rprintfLL(TAIL);

    insertNodeRight(HEAD, "to_the");

    printfLL(HEAD);
    rprintfLL(TAIL);

    HEAD = insertNodeLeft(HEAD, "Yo,");

    printfLL(HEAD);
    rprintfLL(TAIL);

    freeLL(&HEAD);
    TAIL = NULL;

    return 0;
}