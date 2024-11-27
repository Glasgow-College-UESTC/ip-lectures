#include <stdio.h>
#include <math.h>

int main()
{
    double x1, y1, x2, y2, z1, z2;
    double gdistance = 0;
    printf("Input 1: ");
    scanf("%lf, %lf, %lf", &x1,&y1,&z1);

    printf("Input 2: ");
    scanf("%lf, %lf, %lf", &x2, &y2, &z2);

    gdistance = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1)) + ((z2 - z1) * (z2 - z1));
    printf("Distance between the point (%lf, %lf, %lf) and (%lf, %lf, %lf) is: %.4lf", x1, y1, z1, x2, y2, z2, sqrt(gdistance));
    printf("\n");
    return 0;
}
