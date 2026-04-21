#include <stdio.h>

void main() {
  int c;

  while ((c = getchar()) != EOF) {
    if (c == '\t' || c == ' ') {
      putchar('\n');
    } else
      putchar(c);
  }
}
