#include <stdio.h>

int main()
{
    int arr[] = {78, 81, 88, 46, 28, 72, 96, 87, 42, 98};
    int *ptr = arr;
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    *(ptr + 4) = 20; // Passing by reference
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", *(ptr + i));
    }
    printf("\n");
    return 0;
}