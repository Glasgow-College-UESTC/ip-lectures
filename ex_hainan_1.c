#include <stdio.h>
int main(void)
{
    int array[5];
    printf(" array == %p\n", (void *)array); // we are printing the address of the array itself
    // 1 there is no & sign
    // 2 there is no index specified
    
    for (int i = 0; i < 5; i++)
    {
        // here we are going to print out the address of the elements of the array
        printf("&array[%d] = %p\n", i, (void *)&array[i]); // %p is used for pointers
    }
    // we are also interested in finding out the size of the array
    printf("size of array = %zu bytes\n", sizeof(array)); // %zu is for unsigned long
    return 0;
}