#include <stdio.h>

#include <string.h> // we will like to use the functions


// This is a program where we ask the user to enter the password and then we check whether the password is correct or not

// IF the password is correct, we tell the user that they can enter
// Else they need to retry



int main()
{
    // we have two strings that we would like to compare
    char storedPassword[] = "abc123"; // Stored password // have a strong password for your accounts
    // strings, like characters are case sensitive
    char enteredPassword[50]; // Buffer for user input

    int i = 0;

    // we are asking the user to enter five tries at max
    while (i < 5)
    {
        printf("Please enter your password:\t ");
        scanf("%s", enteredPassword); // notice there is no & sign
        // for strings we use %s
        // the name of the string is a pointer to the first element of the string

        // Compare entered password with the stored password
        // the output of the strcmp() function is 0 when the strings compared are the same
        // all the brain of the program is this line below
        // we could have done this differently. we could have written a for loop and then go element by element
        // we are using the built in function strcmp() 
        if (strcmp(storedPassword, enteredPassword) == 0)
        {
            printf("Correct Password. Please Enter \n");
            break; // will terminate not just the infinite loop but will stop the program
        }
        // perform the situation where we enter the wrong password
        else
        {
            printf("Incorrect Password. Please try again\n");
            i++;
            if (i == 5){
                printf("Too many incorrect attempts. Please contact the teacher\n.");
                break;
            }

            continue; // move to the next iteration of the while loop
        }
    }

    return 0;
}