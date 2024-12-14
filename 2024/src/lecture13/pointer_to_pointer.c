#include <stdio.h>
#include <string.h>


unsigned longer_string(char **c_ptr_ptr, char s1[], char *s2) {
    // Compare the lengths of strings s1 and s2. Assign the pointer
    // passed by reference (c_ptr_pttr) to the longer string and
    // return the length of the longer string.
    unsigned N1 = strlen(s1);
    unsigned N2 = strlen(s2);
    if (N2 > N1) {
        *c_ptr_ptr = s2;
        return N2;
    }
    else {
        *c_ptr_ptr = s1;
        return N1;
    }
}

int main(void) {
    char *string1 = "Hello World";
    char string2[] = "IP rulz!";
    char *c_ptr = NULL;

    unsigned N = longer_string(&c_ptr, string1, string2);
    printf("The longer string is \"%s\" which has a length of %u\n", c_ptr, N);
    // Output: The longer string is "Hello World" which has a length of 11

    return 0;
}