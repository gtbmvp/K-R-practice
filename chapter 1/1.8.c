#include <stdio.h>

void main() {
  int c, sc, tc, nlc;

  sc = 0;
  tc = 0;
  nlc = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ')
      ++sc;
    else if (c == '\t')
      ++tc;
    else if (c == '\n')
      ++nlc;
  }

  printf("%d %d %d", sc, tc, nlc);
}
