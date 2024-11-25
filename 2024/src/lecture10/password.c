#include <stdio.h>
#include <string.h>

int main()
{
    char storedPassword[] = "abc123"; // Stored password
    // strings, like characters are case sensitive
    char enteredPassword[50]; // Buffer for user input

    // using an infinite loop to put no limit to the number of attempts
    while (1)
    {
        printf("Please enter your password:\t ");
        scanf("%49s", enteredPassword); // notice there is no & sign

        // Compare entered password with the stored password
        if (strcmp(storedPassword, enteredPassword) == 0)
        {
            printf("Correct Password. Please Enter \n");
            break;
        }
        else
        {
            printf("Incorrect Password. Please try again\n");
            continue;
        }
    }

    return 0;
}