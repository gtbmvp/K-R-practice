#include <stdio.h>

void main() {

  float fahr, celsius;
  int step, upper, lower;

  lower = 0;
  upper = 300;
  step = 10;

  printf("%3s %6s\n", "celsius", "fahr");

  celsius = lower;
  while (celsius <= upper) {
    fahr = (celsius * 9.0 / 5.0) + 32.0;
    printf("%7.0f %6.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
