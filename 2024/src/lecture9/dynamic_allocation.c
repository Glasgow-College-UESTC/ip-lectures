#include <stdio.h>
#include <stdlib.h> // For malloc and free

int main() {
    int rows, cols;

    // User inputs for dimensions
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("\nEnter number of columns: ");
    scanf("%d", &cols);

    // Step 1: Allocate memory for the array of row pointers
    int **array = (int **)malloc(rows * sizeof(int *));

    // Step 2: Allocate memory for each row
    for (int i = 0; i < rows; i++) {
        array[i] = (int *)malloc(cols * sizeof(int));
    }

    // Step 3: Populate the array
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &array[i][j]);
        }
    }

    // Step 4: Print the array
    printf("The array is:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", array[i][j]);
        }
        printf("\n");
    }

    // Step 5: Free allocated memory
    for (int i = 0; i < rows; i++) {
        free(array[i]); // Free memory of each row
    }
    free(array); // Free memory of the row pointers

    return 0;
}