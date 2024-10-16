#include <stdio.h>
int main() {
    char grade = 'B';
    switch(grade) {
      case 'A':
         printf("Excellent!\n");
         break;
      case 'B':
      case 'C':
         printf("Well done\n");
         break;
      case 'D':
         printf("You passed\n");
         break;
      case 'F':
         printf("Better try again\n");
         break;
      default:
         printf("Invalid grade\n");
   }
   return 0;
}
