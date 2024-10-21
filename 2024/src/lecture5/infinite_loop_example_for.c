#include <stdio.h>
int main() {
    int sum, input;
    printf("Enter an integer (0 to terminate):\n");
    for (sum = 0; 1; ) {
        scanf("%d", &input);
        if (input == 0) break;
        sum += input;
    }
    printf("The sum of the entered integers is: %d\n", sum);
    return 0;
}