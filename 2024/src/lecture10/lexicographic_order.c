#include <stdio.h>
#include <string.h>
int main() {
    printf("strcmp(Apple, apple) = %d\n", strcmp("Apple", "apple"));  // -1
    printf("strcmp(Apple, !pple) = %d\n", strcmp("Apple", "!pple"));  //  1
    printf("strcmp(Apple, App)   = %d\n", strcmp("Apple", "App"));      //  1
}