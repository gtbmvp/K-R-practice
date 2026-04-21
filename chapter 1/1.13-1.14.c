#include <stdio.h>

#define IN 1
#define OUT 0

int main() {

  int c, STATE, charcounter, wordcounter, max;
  int warr[10];
  int carr[256];

  STATE = OUT;
  charcounter = wordcounter = max = 0;

  for (int i = 0; i <= 256; i++) {
    carr[i] = 0;
  }

  while ((c = getchar()) != EOF) {
    if (c == '\n' || c == '\t' || c == ' ') {
      if (STATE == IN) {
        STATE = OUT;
        warr[wordcounter] = charcounter;
        if (charcounter > max)
          max = charcounter;
        charcounter = 0;
        ++wordcounter;
      }
    } else {
      STATE = IN;
      ++charcounter;
    }
    carr[c]++;
  }
  // HORIZONTAL HISTOGRAM
  for (int i = 0; i < wordcounter; i++) {
    for (int j = 0; j < warr[i]; j++) {
      printf(" %s", "#");
    }
    printf("%c", '\n');
  }

  // VERTICAL HISTOGRAM
  for (int k = max; k > 0; k--) {
    for (int i = 0; i < wordcounter; i++) {
      if (warr[i] >= k)
        printf(" %c", '#');
      else
        printf(" %c", ' ');
    }
    printf("%c", '\n');
  }

  // SYMBOLS COUNT
  for (int i = 0; i <= 256; i++) {
    if (carr[i] != 0) {
      printf("%c %d\n", i, carr[i]);
    }
  }
}
