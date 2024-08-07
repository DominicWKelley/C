// Portfolio Courses C Programming Examples #15
// Determine if a year is a leap year and display results in a table.

#include <stdbool.h>
#include <stdio.h>

bool is_leap_year(int year);

int main(void) {

  for (int y = 1900; y <= 2100; y++) {
    if (is_leap_year(y))
      printf("%d LEAP YEAR\n", y);
    else
      printf("%d\n", y);
  }

  return 0;
}

bool is_leap_year(int year) {
  if (year % 4 != 0)
    return false;
  else if (year % 100 != 0)
    return true;
  else if (year % 400 != 0)
    return false;
  else
    return true;
}
