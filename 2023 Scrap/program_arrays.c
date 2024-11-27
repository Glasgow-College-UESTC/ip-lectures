// in this program we will like to see how 2d arrays are stored in the memory

#include <stdio.h>

#define N 4 // N is a constant with a value of 4
// The scope of constants is even outside the main function

int main()
{
    char a,b,c;
    int square_matrix[N][N]; // declaration part
    double matrix;

    // use a nested for loop so that we can run along the array indices

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            // insert all the elements with the keyboard

            scanf("%d", &square_matrix[i][j]); // we are using an & array elements

            printf("&array[%d][%d] = %p\n", i, j, (void *)&square_matrix[i][j]);
        }
    }
    return 0;
}