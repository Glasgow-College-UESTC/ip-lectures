#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


int compare_int(const void *a, const void *b) {
    // return negative value if *a < *b
    // return positive value if *a > *b
    // return 0 if *a == *b
    int x = *(int*)a;
    int y = *(int*)b;
    return x - y;
}


void printf_search_result(const int *array, size_t count, int value) {
    assert(array != NULL);
    void *result = bsearch(&value, array, count, sizeof(int), compare_int);
    if (result == NULL) {
        printf("%d not found\n", value);
    }
    else {
        size_t index = (const int *) result - array;
        printf("%d found at index %zu\n", value, index);
    }
}


int main() {
    int array[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf_search_result(array, 10, 9);
    printf_search_result(array, 10, 42);

    return 0;
}