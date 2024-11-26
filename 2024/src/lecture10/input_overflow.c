#include <stdio.h>
int main() {
    char given_name[11];
    printf("Enter your given name (no more than 10 characters): ");
    scanf("%s", given_name);  printf("given_name = %s\n", given_name);
    return 0;
}