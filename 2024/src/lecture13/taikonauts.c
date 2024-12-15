#include <stdlib.h>
#include <stdio.h>

int main() {
    struct PersonNode {
        char name[41];
        unsigned age;
        struct PersonNode *next;
        struct PersonNode *prev;
    };

    struct PersonNode taichonaut1 = {"Yang Liwei", 59, NULL, NULL};
    struct PersonNode taichonaut2 = {"Fei Junlong", 59, NULL, NULL};
    struct PersonNode taichonaut3 = {"Liu Yang", 46, NULL, NULL};

    struct PersonNode *HEAD = &taichonaut1;
    taichonaut1.next = &taichonaut2; taichonaut2.next = &taichonaut3;
    taichonaut3.prev = &taichonaut2; taichonaut2.prev = &taichonaut1;
    struct PersonNode *TAIL = &taichonaut3;

    for (struct PersonNode *node = TAIL; node != NULL; node = node->prev) {
        printf("%s (%d)  ", node->name, node->age);
    }
    // Output: Liu Yang (46)  Fei Junlong (59)  Yang Liwei (59)

    return 0;
}