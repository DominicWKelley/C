// Portfolio Courses C Programming Examples #36
// Bubble Sort.

#include <stdbool.h>
#include <stdio.h>

void bubble_sort(int a[], int length);

int main(void) {
  int a[] = {7, 1, 3, 9, 0, 2, 4, 5, 8, 6};

  int length = 10;

  bubble_sort(a, length);

  for (int i = 0; i < length; i++)
    printf("a[%d] = %d\n", i, a[i]);

  return 0;
}

void bubble_sort(int a[], int length) {
  bool swapped = 0;
  int i = 0;
  do {
    swapped = false;
    for (int j = 0; j < (length - 1 - i); j++) {
      if (a[j] > a[j + 1]) {
        int temp = a[j];
        a[j] = a[j + 1];
        a[j + 1] = temp;
        swapped = true;
      }
    }
    i++;
  } while (swapped);
}
