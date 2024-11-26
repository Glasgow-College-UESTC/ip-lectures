#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "apple,banana,orange";
    char *token;

    // Get the first token
    token = strtok(str, ",");
    while (token != NULL) {
        printf("%s\n", token);     // Print the token
        token = strtok(NULL, ","); // Get the next token
    }

    return 0;
}