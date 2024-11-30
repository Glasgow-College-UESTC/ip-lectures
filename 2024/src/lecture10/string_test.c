#include <stdio.h>
#include <string.h>

int main() {
    char str1[10] = "UESTC";
    char str2[10] = "1005";
    printf("%s %s\n", str1, str2);       // %s placeholder for strings
    strcat(str1, str2);                  // concatenates two strings
    printf("%s %s\n", str1, str2);
    strcpy(str1, str2);                  // copies one strings to another
    printf("%s %s\n", str1, str2);
    printf("%d\n", strcmp(str1, str2));  // compare the elements of two strings
    printf("%d\n", strlen(str1));
    return 0;
}