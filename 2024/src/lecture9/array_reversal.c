#include <stdio.h>

void reverseArray(int *arr, int size)
{
    int *start = arr, *end = arr + size - 1;
    while (start < end)

    // as an assignment, I would like you to try and make the program work for any size of the array
    {
        int temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}

int main()
{
    int arr[] = {78, 81, 88, 46, 28, 72, 96, 87, 42, 98};
    int *ptr = arr; // name of the array points to the first element of the array
    int size = sizeof(arr)/sizeof(arr[0]); // get the number of elements
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(ptr + i)); // print the original array
    }
    printf("\n");
    reverseArray(arr, size); // call the function - pass by reference
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(ptr + i)); // print out the modified version of the array
    }
    printf("\n");
    return 0;
}


