#include <stdio.h>
#define LIM 100

void main() {
  int i, c;
  int stop = 0;
  char s[LIM];

  // i < LIM - 1 && (c = getchar()) != '\n' && c != EOF

  for (i = 0; stop == 0; ++i) {
    c = getchar();

    if (i >= LIM - 1)
      stop = 1;
    else if (c == '\n')
      stop = 1;
    else if (c == EOF)
      stop = 1;
    s[i] = c;
  }
}
