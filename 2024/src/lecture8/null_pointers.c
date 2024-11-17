#include <stdio.h>
#include <stdlib.h>

int main()
{
    // Dynamically allocate memory for an integer
    int *ptr = (int *)malloc(sizeof(int));
    if (ptr == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Assign a value to the allocated memory
    *ptr = 42;
    printf("Value: %d\n", *ptr);

    // Free the allocated memory
    free(ptr);

    printf("Value: %d\n", *ptr);

    // Set the pointer to NULL to prevent it from becoming a dangling pointer
    ptr = NULL;

    // Now, any access to 'ptr' is safe, as it is NULL
    if (ptr == NULL)
    {
        printf("Pointer is NULL, safe from accidental access.\n");
    }

    return 0;
}