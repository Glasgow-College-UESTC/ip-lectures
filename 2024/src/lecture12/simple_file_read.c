#include <stdio.h>
#include <assert.h>
#define BUFFER 1024

int main() {
    FILE *input_file = fopen("test.txt", "r");
    assert(input_file);  // make sure file was opened

    int integer; char c; char string[BUFFER]; float pi;

    fscanf(input_file, "%d", &integer);
    fgetc(input_file);  // skip space character ' '
    c = fgetc(input_file); // read character after the space
    fgetc(input_file);  // skip newline character '\n'
    fgets(string, BUFFER, input_file);
    fscanf(input_file, "%f", &pi);
    printf("integer=%d c=%c string=\"%s\" pi=%f\n", integer, c, string, pi);

    // output:
    //    integer=42 c=! string="I am a string
    //    " pi=3.141590
    //

    fclose(input_file);
    return 0;
}
