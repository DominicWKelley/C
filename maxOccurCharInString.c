// Portfolio Courses C Programming Examples #55
// Find the maximum occuring character in a string.

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void print_max_char(char *s);

int main(void) {
  char s[] = "abcedfghabcdefghabcccdefgh";
  print_max_char(s);
  return 0;
}

void print_max_char(char *s) {
  int length = strlen(s);
  char unique[length];
  int counted = 0;
  int max_count;
  char max_char;

  for (int i = 0; i < length; i++) {
    bool already_counted = false;
    for (int j = 0; j < counted; j++) {
      if (s[i] == unique[j])
        already_counted = true;
    }
    if (already_counted)
      continue;

    int count = 0;
    for (int j = 0; j < length; j++) {
      if (s[i] == s[j])
        count++;
    }
    unique[counted] = s[i];
    counted++;

    if (counted == 1) {
      max_count = count;
      max_char = s[i];
    }

    if (count > max_count) {
      max_count = count;
      max_char = s[i];
    }
  }

  if (length > 0)
    printf("%c:%d\n", max_char, max_count);
  else
    printf("Error: String empty!\n");
}
