#include <stdio.h>
int main(void)
{
    int input, unit, ten, hundred;
    int temp; // for temporarily storing a value

    printf("\nEnter a three-digit number: ");
    scanf("%d", &input);

    hundred = input / 100; // Get the hundred
    temp = input % 100;  // remove the hundred
    ten = temp / 10;  // Get the ten
    unit = input % 10; // Get the unit

    printf("\n\nThe reversal is %d%d%d\n\n", unit, ten, hundred);
    return 0;
}