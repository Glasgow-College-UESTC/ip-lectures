#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void min_max_call_by_ref(int *min, int *max, int *a, unsigned length) {
    // Find the minimum and maximum value found in an array
    // Input parameters: a, length
    // Output parameters: min, max
    *min = INT_MAX;
    *max = INT_MIN;
    for (unsigned i = 0; i < length; i++) {
        if (a[i] < *min) {*min = a[i];}
        if (a[i] > *max) {*max = a[i];}
    }
}

struct MinMax {
    int min;
    int max;
};

struct MinMax min_max_by_struct(int *a, unsigned length) {
    // Find the minimum and maximum value found in an array
    struct MinMax tuple = {INT_MAX, INT_MIN};
    for (unsigned i = 0; i < length; i++) {
        if (a[i] < tuple.min) {tuple.min = a[i];}
        if (a[i] > tuple.max) {tuple.max = a[i];}
    }
    return tuple;
}

int main() {
    int array[] = {1, 12, 5, -10, 12, 0};

    int min, max;
    min_max_call_by_ref(&min, &max, array, sizeof(array) / sizeof(int));
    printf("min = %d   max = %d\n", min, max);

    struct MinMax min_max = min_max_by_struct(array, sizeof(array) / sizeof(int));
    printf("min = %d   max = %d\n", min_max.min, min_max.max);

    return 0;
}