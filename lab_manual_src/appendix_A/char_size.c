#include <stdio.h>
#include <limits.h>

int main(int argc, char **argv) {
    printf("sizeof(char) = %zu (bytes)\n", sizeof(char));
    printf("sizeof(unsigned char) = %zu (bytes)\n", sizeof(unsigned char));
    printf("sizeof(signed char) = %zu (bytes)\n", sizeof(signed char));

    printf("\n");
    printf("CHAR_MIN  = %d\tCHAR_MAX  = %d\n", CHAR_MIN, CHAR_MAX);
    printf("SCHAR_MIN = %d\tSCHAR_MAX = %d\t\tUCHAR_MAX = %d\n", SCHAR_MIN, SCHAR_MAX, UCHAR_MAX);

    return 0;
}