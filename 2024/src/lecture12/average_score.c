#include <stdio.h>
#include <assert.h>

int main() {
    unsigned N = 0, score, total = 0;
    FILE *fptr = fopen("scores.txt", "r");
    assert(fptr);
    // feof returns non-zero when the end of the file has
    // been reached
    while (!feof(fptr)) {
        fscanf(fptr, "%u", &score);
        total += score;
        N++;
    }
    printf("Average = %.2lf%%\n", (double) total / N);
    fclose(fptr);
    return 0;
}
