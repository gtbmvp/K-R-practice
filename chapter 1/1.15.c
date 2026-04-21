#include <stdio.h>

float temp(int celsius);

void main() {

  int celsius;
  int step, upper, lower;

  lower = 0;
  upper = 300;
  step = 10;

  printf("%3s %6s\n", "celsius", "fahr");

  celsius = lower;
  while (celsius <= upper) {
    printf("%7.0f %6.1f\n", celsius, temp(celsius));
    celsius = celsius + step;
  }
}

float temp(int celsius) {
  float fahr = (celsius * 9.0 / 5.0) + 32.0;
  return fahr;
}
