#include <stdio.h>
#include <stdbool.h>
#define SENTINEL -999
// #include "tictactoe.h"

void sw_turn(char *turn)
{
    if (*turn == 'X')
    {
        *turn = 'O';
    }
    else
    {
        *turn = 'X';
    }
}

bool check_win(char board[])
{
    bool win = false;

    // Horizontal 1
    if (board[0] != '-')
    {
        if (board[0] == board[1])
        {
            if (board[0] == board[2])
            {
                win = true;
            }
        }
    }
    // Horizontal 2
    if (board[3] != '-')
    {
        if (board[3] == board[4])
        {
            if (board[3] == board[5])
            {
                win = true;
            }
        }
    }
    // Horizontal 3
    if (board[6] != '-')
    {
        if (board[6] == board[7])
        {
            if (board[6] == board[8])
            {
                win = true;
            }
        }
    }

    // Vertical 1
    if (board[0] != '-')
    {
        if (board[0] == board[3])
        {
            if (board[0] == board[6])
            {
                win = true;
            }
        }
    }
    // Vertical 2
    if (board[1] != '-')
    {
        if (board[1] == board[4])
        {
            if (board[1] == board[7])
            {
                win = true;
            }
        }
    }
    // Vertical 3
    if (board[2] != '-')
    {
        if (board[2] == board[5])
        {
            if (board[2] == board[8])
            {
                win = true;
            }
        }
    }

    // Diagonal 1
    if (board[0] != '-')
    {
        if (board[0] == board[4])
        {
            if (board[0] == board[8])
            {
                win = true;
            }
        }
    }
    // Diagonal 2
    if (board[2] != '-')
    {
        if (board[2] == board[4])
        {
            if (board[2] == board[6])
            {
                win = true;
            }
        }
    }

    return win;
}

void insert(char board[], char *turn)
{
    int index;
    printf("Turn of %c\nEnter index : ", *turn);
    scanf("%d", &index);

    // if (index == SENTINEL)
    // {
    //     return 0;
    // }

    board[index - 1] = *turn;
}

bool check_draw(int turn_count)
{
    if (turn_count < 9)
    {
        return false;
    }
    else
    {
        return true;
    }
}

void display_table(char board[])
{
    int i;

    for (i = 0; i < 9; i++)
    {
        printf("%c ", board[i]);
        if (((i + 1) % 3) == 0)
        {
            printf("\n");
        }
    }
}

int main()
{
    char turn = 'X', board[] = {'-', '-', '-', '-', '-', '-', '-', '-', '-'};
    bool game = true;
    int turn_count = 0;

    printf("WELCOME TO TIC TAC TOE!!!!!\n(by @dekaottoman, type '-999' to exit)\n\n");
    while (game)
    {
        display_table(board);
        insert(board, &turn);
        turn_count++;
        // We check for a win
        if (check_win(board))
        {
            display_table(board);
            printf("%c Wins!!!", turn);
            getchar();
            return 0;
        }
        // We check for a draw
        if (check_draw(turn_count))
        {
            display_table(board);
            printf("Draw!!!");
            getchar();
            return 0;
        }
        sw_turn(&turn);
    }
}
