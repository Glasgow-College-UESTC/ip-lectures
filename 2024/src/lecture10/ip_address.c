#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>



// To ask for an IP v4 address there will be 4 octets 
// in this program, we ask the user to enter a valid IP v4 address
// v4 means there are 4 octets
// lately we have slowly started moving to IP v6 addresses

// determine the IP address has a valid octet part or not
// ie. range is between 0 and 255
// so far all the values are of type string even the number 192
bool isValidOctet(const char *octet)
{
    int value = atoi(octet); // Convert string to integer
    // atoi is a function that converts a string to integer
    // if we enter 555 -> 555 
    // valid values are only between 0 and 255 inclusive
    if (value < 0 || value > 255)
        return false; // return an error

    // Ensure no superfluous characters exist (e.g., "o1" or "1a") only numbers 
    while (*octet)
    {
        if (!(*octet >= '0' && *octet <= '9'))
            return false;
        octet++;
    }

    return true;
}

int main()
{
    char ipAddress[20]; // user enters the IP address as a string only

    // Prompt the user for an IP address
    // The user enters the .
    printf("Enter an IP address (e.g., 192.168.1.1): ");
    scanf("%19s", ipAddress); // note no & sign
    // we not only ask for a string input
    // but we pass the string to another function via a pointer

    // Pointer to traverse the tokens
    // Break the string into octets
    // Split the entered string into 4 octets and also check whether the addresses are correct and valid 
    // 0 - 255 
    char *ptr = strtok(ipAddress, "."); // this is the first call
    int octetCount = 0;

    printf("Parsing the IP address:\n");

    // Validate each octet
    // '\0'
    while (ptr != NULL)
    {
        printf("Octet %d: %s\n", ++octetCount, ptr);

        // Validate octet range
        if (!isValidOctet(ptr))
        {
            printf("Error: Invalid octet '%s'. IP address is not valid.\n", ptr);
            return 1;
        }

        ptr = strtok(NULL, "."); // Move to the next token
    }

    // Check if the IP address had exactly 4 octets
    // this is the IP v4 protocol
    if (octetCount != 4)
    {
        printf("Error: An IP address must have exactly 4 octets.\n");
        return 1;
    }

    printf("The IP address is valid.\n");
    return 0;
}