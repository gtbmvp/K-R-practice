#include <stdio.h>

void main() {

  char c, p;

  while ((c = getchar()) != EOF) {
    if (c == ' ') {
      if (p == ' ')
        continue;
      putchar(c);
      p = c;
    } else {
      putchar(c);
      p = c;
    }
  }
}
