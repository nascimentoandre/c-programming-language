#include <stdio.h>
#include <limits.h>
#include <float.h>

int main() {
  long unsigned max_long = ULONG_MAX;
  printf("Ranges printed from the standard library:\n");
  // unsigned
  printf("Unsigned char: %d to %d\n", 0, UCHAR_MAX);
  printf("Unsigned short: %d to %d\n", 0, USHRT_MAX);
  printf("Unsigned int: %d to %d\n", 0, UINT_MAX);
  printf("Unsigned long: %d to %lu\n", 0, max_long);
  // signed
  printf("Signed char: %d to %d\n", CHAR_MIN, CHAR_MAX);
  printf("Signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
  printf("Signed int: %d to %d\n", INT_MIN, INT_MAX);
  printf("Signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);

  return 0;
}

