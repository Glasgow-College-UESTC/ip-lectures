
#include <stdio.h>

// We need to design and create an empty board
// in this function, we are passing the input as a pointer
void printBoard(char board[3][3])
{
    printf("\n");
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%c ", board[i][j]);
        }
        printf("\n");
    }
    // it just displays the result during each iteration
}

// winning conditions

// is it passing by reference or passing by a value?
int checkWin(char board[3][3])
{
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][0] != ' ')
            return 1;
        if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] != ' ')
            return 1;
    }
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] != ' ')
        return 1;
    if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[0][2] != ' ')
        return 1; // if there is a 1 it means the game has been won
    return 0;     // return 0 means the game is either tied or we will still need to carry on
}

// the main function
int main()
{
    char board[3][3]; // a 2D array this is a char type board and all the rest have been analysed as if the board array is of type int
    char(*ptr)[3] = board; //  the name of the array is the pointer to the array as well this is not a generic pointer
    // this pointer has the same data type as the location data type

    // we have initialised the whole board to be empty
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // we can use either of the two methods to access the array elements
            // pointer arithmetic is MOST useful when we are dealing with arrays since the elements are stored in consecutive memory locations
            *(*(ptr + i) + j) = ' '; // remember 2d arrays are 1d stacks in the memory // rather than having two indices, we can simply have a pointer to access the elements of the multidimensional array
            board[i][j] = ' '; // both perform the same task
            // the above two statements are equivalent

            // since this is a char type pointer we can
            // 1 perform arithmetic
            // 2 access the elements through derefencing
        }
    }
    int player = 0;

    // for embedded system programming
    // in the next semester in the micrelectronics course
    // you want the machine to be running ALL the time
    // the machine needs to keep running all the time
    // the code needs to keep on running
    // we can stop the code until a condition is met
    // then we can stop the code

    // for these kinds of situations, we end up creating an infinite loop
    while (1)
    {
        printBoard(board); // we are passing the name of the array as an input. i.e., this is PASSING by REFERENCE
        // we need to keep alternating the turns
        printf("Player %d, enter your move (row and column): ", player + 1);
        int row, col;
        scanf("%d %d", &row, &col); // this is the location where we will put our character/value

        // we need to check the inputs are valid and in range
        // if EITHER of the row OR column values are outside the range
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ')
        {
            printf("Invalid move, try again.\n");  // we want to stay inside the range which in this case is just 0-2
            continue; // takes us to the next iteration of the while loop
        }
        board[row][col] = (player == 0) ? 'X' : 'O'; //
        // this is just a short form of the if else statement
        // single line conditional statement
        // we are passing the array to a function
        // array name is a pointer
        // whatever modifications we make in the function they are going to modify the array itself
        if (checkWin(board))
        {
            printf("Player %d wins!\n", player + 1);
            break; // there always need to be a break statement in an infinite loop otherwise the program will never stop
        }
        player = 1 - player;
    }
    return 0;
}
