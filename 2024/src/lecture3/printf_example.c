#include <stdio.h>
int main()
{
    int age = 44;
    char firstname_initial = 'M';
    char lastname_initial = 'B';
    float height_cm = 172.7;
    printf("My age is %d, my initials are %c %c, and my height is %f (cm).\n",
           age, firstname_initial, lastname_initial, height_cm);
    return 0;
}