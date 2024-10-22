#include <stdio.h>

int main() {
    for (int n = 0, cube; n <= 10; n++) {
        cube = n * n * n;
        printf("The cube of the number %8d is %8d\n", n, cube);
    }
    return 0;
}