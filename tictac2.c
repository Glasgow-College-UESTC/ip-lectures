
#include <stdio.h>

// We need to design and create an empty board
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
    char board[3][3]; // this is a char type board and all the rest have been analysed as if the board array is of type int
    char(*ptr)[3] = board; //  this is not a generic pointer
    // this pointer has the same data type as the location data type

    // we have initialised the whole board to be empty
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            *(*(ptr + i) + j) = ' '; // remember 2d arrays are 1d stacks in the memory
            board[i][j] = ' ';
            // the above two statements are equivalent

            // since this is a char type pointer we can
            // 1 perform arithmetic
            // 2 access the elements through derefencing
        }
    }
    int player = 0;

    // for embedded system programming
    // the machine needs to keep running all the time
    // the code needs to keep on running
    // we can stop the code until a condition is met
    // then we can stop the code

    // for these kinds of situations, we end up creating an infinite loop
    while (1)
    {
        printBoard(board);
        // we need to keep alternating the turns
        printf("Player %d, enter your move (row and column): ", player + 1);
        int row, col;
        scanf("%d %d", &row, &col); // this is the location where we will put our character/value

        // we need to check the inputs are valid and in range
        if (row < 0 || row > 2 || col < 0 || col > 2 || board[row][col] != ' ')
        {
            printf("Invalid move, try again.\n");
            continue; // takes us to the next iteration of the while loop
        }
        board[row][col] = (player == 0) ? 'X' : 'O'; //
        // we are passing the array to a function
        // array name is a pointer
        // whatever modifications we make in the function they are going to modify the array itself
        if (checkWin(board))
        {
            printf("Player %d wins!\n", player + 1);
            break;
        }
        player = 1 - player;
    }
    return 0;
}
