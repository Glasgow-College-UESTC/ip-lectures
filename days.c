#include <stdio.h>
int main() {
  int ndays, y, m, d;
  
  printf("Input no. of days: ");
  scanf("%d", &ndays);
  
  y = (int) ndays/365; // number of years
  ndays = ndays-(365*y); 
  m = (int)ndays/30; // months
  d = (int)ndays-(m*30); // number of days
  
  printf(" %d Year(s) \n %d Month(s) \n %d Day(s)", y, m, d);
  return 0;
}

// Correct calculation of the number of years +3
// Correct calculation of the number of months +3
// Correct days calculation +2
// Use of scanf and printf functions +2
