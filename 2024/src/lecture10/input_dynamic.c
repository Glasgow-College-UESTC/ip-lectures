#include <stdio.h>
#include <stdlib.h>

int main() {
     int   given_name_length;
     char *given_name = NULL;  // advise: never leave a pointer "dangling," i.e., uninitialized
     printf("What is the length of your given name? ");
     scanf("%d", &given_name_length);

     given_name = malloc(sizeof(char) * given_name_length);  // allocate enough memory to store given_name_length characters
     if (given_name == NULL) {
         printf("Insufficient memory!");
         return 1;
     }

     printf("Enter your given name: ");
     scanf("%s", given_name);
     printf("given_name_length = %d, given_name = %s\n", given_name_length, given_name);

     free(given_name);                                            // deallocate memory and return it to the operating system

     return 0;
 }