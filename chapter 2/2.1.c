#include <float.h>
#include <limits.h>
#include <stdio.h>

void main() {
  printf("### CHAR ###\n");
  printf("char bits: %d\n", CHAR_BIT);
  printf("max char value: %d\n", SCHAR_MAX);
  printf("min char value: %d\n", CHAR_MIN);
  printf("unsigned max char value: %d\n", UCHAR_MAX);
  printf("%c", '\n');

  printf("### INT ###\n");
  printf("max int value: %d\n", INT_MAX);
  printf("min int value: %d\n", INT_MIN);
  printf("unsigned max int value: %d\n", UINT_MAX);
  printf("%c", '\n');

  printf("### LONG ###\n");
  printf("max long value: %ld\n", LONG_MAX);
  printf("min long value: %ld\n", LONG_MIN);
  printf("unsigned max long value: %ld\n", ULONG_MAX);
  printf("%c", '\n');

  printf("### SHORT ###\n");
  printf("max short value: %d\n", SHRT_MAX);
  printf("min short value: %d\n", SHRT_MIN);
  printf("%c", '\n');
}
