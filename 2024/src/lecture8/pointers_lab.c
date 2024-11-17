#include <stdio.h>

#define ROWS 3
#define COLS 4

// Function to print and modify the matrix
void print_modMatrix(int (*matrix)[COLS], int rows)
{
    for (int i = 0; i < rows; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            // Modify each element to demonstrate passing by reference
            matrix[i][j] += 1; // Example modification: increment by 1
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main(int argc, char **argv)
{
    int matrix[ROWS][COLS] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}};

    printf("Original Matrix elements:\n");
    // Print the original matrix
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    printf("\nModified Matrix elements in print_modMatrix function:\n");
    // Call the function to print and modify the matrix
    print_modMatrix(matrix, ROWS);

    printf("\nMatrix elements after calling print_modMatrix:\n");
    // Print the matrix again to show that it was modified
    for (int i = 0; i < ROWS; ++i)
    {
        for (int j = 0; j < COLS; ++j)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}