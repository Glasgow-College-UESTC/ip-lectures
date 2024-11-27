#include<stdio.h>
#define N 5 // size of the matrix
int main()
{

    // int ident_matrix[N][N];
    // int row, col;
    // for (row = 0; row < N; row++)
    // {
    //     for (col = 0; col < N; col++)
    //     {
    //         if (row == col)
    //         {
    //             printf("\U00002B1C"); // this is a unicode for the :smiley: emoji
    //             ident_matrix[row][col] = 1;
    //         }
    //         else
    //         {
    //             printf("\U00002B1B"); // this is a unicode for the :no_mouth: emoji
    //             ident_matrix[row][col] = 0;
    //         }
    //     }
    //     printf("\n");
    // }

    // for (row = 0; row < N; row++)
    // {
    //     for (col = 0; col < N; col++)
        
    //     {

    //         printf("&array[%d][%d] = %p\n", row, col,  (void *)&ident_matrix[row][col]);
    //     }
    // }

    int matrix[2][3];
    matrix[1][0] = 17;
    // matrix[30][40] = 2;
    printf("%d", matrix[30][40]);

    // char y;
    // int z = 9;
    // char point1[6] = {1, 2, 3, 4, 5, 6};
    // char point2[6] = {1, 2, 3, 4, 5, 6};
    // // examples of accessing outside the array. A compile error is not always raised
    // y = point1[5];
    // printf("%c\n", y);
    // y = point2[-4];
    // printf("%c\n", y);
    // y = point1[z];
    // printf("%c", y);
    return 0;
        }
