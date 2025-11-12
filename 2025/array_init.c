#include <stdio.h> // which has definitions of printf function
#include <stdlib.h> // which has definitions of malloc and free functions

void reverseArray(int *arr, int size) {
    int *start = arr, *end = arr + size - 1;
    while (start < end) {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}


int main() // void means nothing
{
    int n; // This 'n' could come from user input!
    int *arr; // array pointer

    // previojusly we did something like:
    // int arr[10];
    // int arr[] = {1,2,3,4,5}; FIXED

    // Ask the Heap for memory
    // after compile | at runtime
    printf("Enter the size of the array that you would like to create:\n ");
    scanf("%d", &n); // size of the array
    arr = (int *)malloc(n * sizeof(int)); // based on the input n, we are gogin ato allocate memory 

    // Check for failure!
    if (arr == NULL)
    {
        printf("Error: Memory allocation failed!\n");
        return 1;
    }

    // Use the memory (it's just an array)
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]); // Initialize the array
    }
    arr[0] = 100;
    printf("%d\n", arr[0]);

    // Free the memory (Return it to the Heap)
    free(arr);
    return 0;
}