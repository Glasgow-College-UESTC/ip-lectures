#include <stdio.h>

#include <string.h>

// This is a program where we ask the user to enter the password and then we check whether the passwoek is correct or not

// IF the password is correct, we tell the user that they can enter
// Else they need to retry



int main()
{
    // we have two strings that we would like to compare
    char storedPassword[] = "abc123"; // Stored password
    // strings, like characters are case sensitive
    char enteredPassword[50]; // Buffer for user input

    // using an infinite loop to put no limit to the number of attempts
    while (1)
    {
        printf("Please enter your password:\t ");
        scanf("%s", enteredPassword); // notice there is no & sign
        // for strings we use %s
        // the name of the string is a pointer to the first element of the string

        // Compare entered password with the stored password
        // the output of the strcmp() function is 0 when the strings compared are the same
        // all the brain of the program is this line below
        // we could have done this differently. we could have written a for loop and then go element by elementß
        if (strcmp(storedPassword, enteredPassword) == 0)
        {
            printf("Correct Password. Please Enter \n");
            break; // will terminate not just the infinite loop but will stop the program
        }
        else
        {
            printf("Incorrect Password. Please try again\n");
            continue; // move to the next iteration of the while loop
        }
    }

    return 0;
}