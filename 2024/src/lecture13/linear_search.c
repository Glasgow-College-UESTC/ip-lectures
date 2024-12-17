#include <stdlib.h>
#include <stdio.h>

int *linear_search(int *array, unsigned length, int search_value) {
    for (unsigned i = 0; i < length; i++) {
        if (array[i] == search_value) {
            return &array[i];
        }
    }
    return NULL;
}

int main() {
    int int_array[10] = {1, 5, 12, -2, 3, 22, 0, 1, 4, 5};
    int search_value = 3;
    if (linear_search(int_array, 10, search_value) == NULL) {
        printf("%d NOT found\n", search_value);
    }
    else {
        printf("%d FOUND\n", search_value);
    }

    return 0;
}