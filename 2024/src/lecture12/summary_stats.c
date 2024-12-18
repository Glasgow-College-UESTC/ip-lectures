#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include <limits.h>

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


static void swapInt(int *x, int *y) {
    assert(x != NULL && y != NULL);
    if (x == y) return;
    int temp = *x;
    *x = *y;
    *y = temp;
}


void sortLL(struct IntNode *head, unsigned int length) {
    assert(head != NULL);
    int swap_occurred;
    unsigned int N_i = length;
    do {
        swap_occurred = 0;
        struct IntNode *node = head;
        for (unsigned int i = 0; i < N_i - 1; i++, node = node->next) {
            if (node->value > node->next->value) {
                swapInt(&node->value, &node->next->value);
                swap_occurred = 1;
            }
        }
        N_i--;
    } while (swap_occurred);
}


int main(int argc, char *argv[]) {
    //if (argc != 2) {
    //    printf("Usage: ./summary_stats <filename>\n");
    //}

    char filename[] = "scores.txt";
    FILE *file = fopen(filename, "r");
    assert(file != NULL);

    struct IntNode *HEAD = NULL, *TAIL = NULL;
    unsigned int N = 0;
    while (!feof(file)) {
        int value;
        fscanf(file, "%d", &value);
        if (HEAD == NULL) {
            // first iteration
            HEAD = TAIL = insertNode(NULL, value);
        }
        else {
            // subsequent iterations
            TAIL = insertNode(TAIL, value);
        }
        N++;
    }
    fclose(file);

    printfLL(HEAD);

    sortLL(HEAD, N);
    printf("\n");
    printfLL(HEAD);

    freeLL(&HEAD);

    return 0;
}