#include <stdio.h>
int main(void)
{
    int array[5];
    int i;
    printf(" array == %p\n", (void *)array);
    for (i = 0; i < 5; i++)
    {
        printf("&array[%d] = %p\n", i, (void *)&array[i]); // %p is used for pointers
    }
    printf("size of array = %zu bytes\n", sizeof(array)); // %zu is for unsigned long

    printf("&array[%d] = %p\n", i, (void *)&array[5]); // %p is used for
    return 0;
}
