#include <stdio.h>
#include <string.h>


size_t longer_string(const char **c_ptr_ptr, const char s1[], const char *s2) {
    // type declarations are best interpreted by reading them in reverse:
    // c_ptr_ptr is a pointer to a pointer to a const character
    size_t N1 = strlen(s1);
    size_t N2 = strlen(s2);
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
    char *string2 = "IP rulz!";
    char *c_ptr = NULL;

    // type cast is necessary to add const qualifier
    unsigned N = longer_string((const char **) &c_ptr, string1, string2);
    printf("The longer string is \"%s\" which has a length of %u\n", c_ptr, N);
    // Output: The longer string is "Hello World" which has a length of 11

    return 0;
}