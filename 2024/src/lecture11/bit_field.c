#include <stdio.h>
#include <limits.h>


// adapted from https://www.reddit.com/r/C_Programming/comments/5hczva/integer_in_c_and_how_to_print_its_binary/
void binprintf(char v) {
    unsigned int mask= 0x1 << (sizeof (char) * CHAR_BIT - 1);
    while(mask) {
        printf("%d", (v&mask ? 1 : 0));
        mask >>= 1;
    }
}

int main() {
    char controller_state = 0b10000010;

    char A_mask = 0x1 << 1;
    char start_mask = 0x1 << 3;

    printf("get field:\n");
    //binprintf(controller_state & A_mask);
    printf("Is A set? %d\n", (controller_state & A_mask) != 0);
    //binprintf(controller_state & start_mask);
    printf("Is start set? %d\n", (controller_state & start_mask) != 0);
    printf("\n");

    binprintf(controller_state);
    printf("\n");
    binprintf(start_mask);
    printf("\n");

    // shorthand for controller_state = controller_state |= start_mask;
    controller_state |= start_mask;

    binprintf(controller_state);

    return 0;
}