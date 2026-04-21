#include <stdio.h>

void main() {
  printf(EOF);

  int result;
  result = getchar() != EOF;

  if (result == 0)
    printf("0");
  else if (result == 1)
    printf("1");
}
