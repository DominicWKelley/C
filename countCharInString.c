// Portfolio Courses C Programming Examples #52
// Count occurrences of each character in a string.

#include <stdbool.h>
#include <stdio.h>
#include <string.h>

void print_occurrences(char *s);

int main(void) {
  char s[] = "abcdefghijklmnopabcdefabcab";
  print_occurrences(s);

  return 0;
}

void print_occurrences(char *s) {
  int length = strlen(s);
  char unique[length];
  int counted = 0;

  for (int i = 0; i < length; i++) {
    bool already_counted = false;
    for (int j = 0; j < counted; j++)
      if (s[i] == unique[j])
        already_counted = true;
    if (already_counted)
      continue;

    int count = 0;
    for (int j = 0; j < length; j++)
      if (s[i] == s[j])
        count++;

    printf("%c - %d\n", s[i], count);

    unique[counted] = s[i];
    counted++;
  }
}
