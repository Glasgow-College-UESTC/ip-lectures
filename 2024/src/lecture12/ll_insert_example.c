#include <stdio.h>
#include <stdlib.h>
#include <assert.h>


struct IntNode {
    int value;
    struct IntNode *next;
};


struct IntNode *insertNode(struct IntNode *node_ptr, int value) {
    struct IntNode *new_node = malloc(sizeof(struct IntNode));  // allocate memory to store new node
    assert(new_node);
    new_node->value = value;
    if (node_ptr != NULL) {
        // link newly created node to current node's linked node
        new_node->next = node_ptr->next;
        // link current node to newly created node
        node_ptr->next = new_node;
    }
    return new_node;
}

void printfLL(const struct IntNode *node_ptr) {
    while (node_ptr != NULL) {
        printf("%d ", node_ptr->value);
        node_ptr = node_ptr->next;
    }
    printf("\n");
}


void freeLL(struct IntNode **node_ptr_ptr) {
    struct IntNode *node_ptr = *node_ptr_ptr;
    while (node_ptr != NULL) {
        struct IntNode *next_node_ptr = node_ptr->next;
        free(node_ptr);
        node_ptr = next_node_ptr;
    }
    *node_ptr_ptr = NULL;
}

int main() {
    struct IntNode *HEAD = NULL, *TAIL = NULL;

    HEAD = TAIL = insertNode(NULL, 12);
    TAIL = insertNode(TAIL, 99);
    TAIL = insertNode(TAIL, 37);
    TAIL = insertNode(TAIL, 42);

    printfLL(HEAD);

    freeLL(&HEAD);
    printf("Does HEAD == NULL? %d\n", HEAD == NULL);
    TAIL = NULL;

    freeLL(&HEAD);

    return 0;
}