#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <float.h>

// #include <float.h>

/*
#ifdef DBL_DECIMAL_DIG
  #define OP_DBL_Digs (DBL_DECIMAL_DIG)
#else  
  #ifdef DECIMAL_DIG
    #define OP_DBL_Digs (DECIMAL_DIG)
  #else  
    #define OP_DBL_Digs (DBL_DIG + 3)
  #endif
#endif
*/

int main(int argc, char **argv) {
    unsigned x_int = 0x4D8EF3C1;
    unsigned y_int = 0x4D8EF3C2;
    unsigned z_int = 0x4D8EF3C3;

    float x, y, z;

    assert(sizeof(x_int) == sizeof(x));

    memcpy(&x, &x_int, sizeof(x));
    memcpy(&y, &y_int, sizeof(x));
    memcpy(&z, &z_int, sizeof(x));

    printf("x = %f\ny = %f\nz = %f\n", x, y, z);

    double c = 299792458; 

    printf("c = %lf\n", c);

    printf("c - y = %lf\n", c - y);

    printf("FLT_EPSILON = %le\n", FLT_EPSILON);

    printf("%le\n", (c - y) / c);

    float inf_test = 1.0 / 0.0;
    
    unsigned inf_test_unsigned;
    memcpy(&inf_test_unsigned, &inf_test, sizeof(inf_test));

    printf("inf_test = %lf (%#010x)\n", inf_test, inf_test_unsigned);

    float x1 = 1000000.0;
    float x2 = 1.2;
    float x3 = 1000000.0;
    float x4 = x1 + x2 - x3;

    printf("x4 = %lf\n", x4);

    return 0;
}