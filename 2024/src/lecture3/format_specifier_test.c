#include <stdio.h>
int main () {
    int x = 20;
    float y = -16.7889;
    printf("Value x=%d and value y=%9.3f\n", x, y);
    printf("Value x=%i and value y=%7.1f\n", x, y);
    printf("Value x=%3d and value y=%5.1f\n", x, y);
    printf("Value x=%1d and value y=%3.1f\n", x, y);
    return 0;
}