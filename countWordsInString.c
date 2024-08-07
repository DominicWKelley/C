// Portfolio Courses C Programming Examples #41
// Count the words in a string.

#include <stdio.h>
#include <string.h>

int word_count(char *s);

int main(void) {
  char s[] = "This, is the way. Another.";

  int count = word_count(s);

  printf("count: %d\n", count);

  return 0;
}

int word_count(char *s) {
  int len = strlen(s);
  int count = 0;
  char nonwords[] = " .,:\n\t";

  for (int i = 0; i < len; i++) {
    while (i < len) {
      if (strchr(nonwords, s[i]) != NULL)
        break;
      i++;
    }
    count++;

    while (i < len) {
      if (strchr(nonwords, s[i]) == NULL)
        break;
      i++;
    }
  }
  return count;
}
