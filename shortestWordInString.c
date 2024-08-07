// Portfolio Courses C Programming Examples #43
// Find length of smallest word in a string.

#include <stdio.h>
#include <string.h>

int smallest_word(char *s);

int main(void) {
  char s[] = "This, is the way. Again...";
  int smallest = smallest_word(s);
  printf("%d\n", smallest);

  return 0;
}

int smallest_word(char *s) {
  int len = strlen(s);
  int count = 0;
  int min = 100000;
  char nonwords[] = " .,;\n\t";
  int i = 0;

  while (i < len) {
    count = 0;
    while (i < len) {
      if (strchr(nonwords, s[i]) != NULL)
        break;
      i++;
      count++;
    }

    if (count < min)
      min = count;

    while (i < len) {
      if (strchr(nonwords, s[i]) == NULL)
        break;
      i++;
    }
  }

  return min;
}
