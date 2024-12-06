#include <stdio.h>

int main(int argc, const char *argv[])
{
    int i = 1;
    int j = 0;
    int k = --j - -j;
    int l = i-- || i++ * k;

    printf("i = %d, j = %d, k = %d, l = %d\n", i, j, k, l);

    return 0;
}
