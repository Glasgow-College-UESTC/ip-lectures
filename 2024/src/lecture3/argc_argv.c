#include <stdio.h>

int main(int argc, char *argv[]) {
    printf("The user specified %d command line arguments\n", argc);

    for (int i = 0; i < argc; i++) {
        printf("Command line argument %2d: %s\n", i, argv[i]);
    }

    return 0;
}