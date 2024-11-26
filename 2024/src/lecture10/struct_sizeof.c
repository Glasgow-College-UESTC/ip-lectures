#include <stdio.h>

int main() {
    struct Student {
        char name[50];
        int age;
        float grade;
    };

    printf("sizeof(char) = %lu\n", sizeof(char));
    printf("sizeof(int) = %lu\n", sizeof(int));
    printf("sizeof(float) = %lu\n", sizeof(float));
    printf("sizeof(struct Student) = %lu\n", sizeof(struct Student));
}