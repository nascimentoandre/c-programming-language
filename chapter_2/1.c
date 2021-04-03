/*****

Exercise 2-1. Write a program to determine the ranges of char, short, int,
and long variables, both signed and unsigned, by printing appropriate values
from standard headers and by direct computation. Harder if you compute them:
determine the ranges of the various floating-points types.

*****/

#include <stdio.h>
#include <math.h>
#include <limits.h>
#include <float.h>

int main() {
  char unsigned u_char_max;
  short unsigned u_short_max;
  int unsigned u_int_max;
  long unsigned u_long_max;
  char signed char_min, char_max;
  short signed short_min, short_max;
  int signed int_min, int_max;
  long signed long_min, long_max;

  printf("Ranges printed from the standard library:\n");
  // unsigned
  printf("Unsigned char: %d to %d\n", 0, UCHAR_MAX);
  printf("Unsigned short: %d to %d\n", 0, USHRT_MAX);
  printf("Unsigned int: %d to %ld\n", 0, UINT_MAX);
  printf("Unsigned long: %d to %lu\n", 0, ULONG_MAX);
  // signed
  printf("Signed char: %d to %d\n", CHAR_MIN, CHAR_MAX);
  printf("Signed short: %d to %d\n", SHRT_MIN, SHRT_MAX);
  printf("Signed int: %d to %d\n", INT_MIN, INT_MAX);
  printf("Signed long: %ld to %ld\n", LONG_MIN, LONG_MAX);

  printf("########################################\n");
  printf("Ranges printed from direct computation:\n");
  u_char_max = pow(2, 8)-1;
  u_short_max = pow(2, 16) -1;
  u_int_max = pow(2, 32) -1;
  u_long_max = pow(2, 64) -1;

  char_min = -(pow(2, 8)/2);
  char_max = pow(2,8)/2 -1;
  short_min = -(pow(2, 16)/2);
  short_max = -(pow(2, 16)/2);
  int_min = -(pow(2, 32)/2);
  int_max = pow(2,32)/2 -1;
  long_min = -(pow(2, 64)/2);
  long_max = pow(2,64)/2 -1;

  //unsigned
  printf("Unsigned char: %d to %d\n", 0, u_char_max);
  printf("Unsigned short: %d to %d\n", 0, u_short_max);
  printf("Unsigned int: %d to %ld\n", 0, u_int_max);
  printf("Unsigned long: %d to %lu\n", 0, u_long_max);
  // signed
  printf("Signed char: %d to %d\n", char_min, char_max);
  printf("Signed short: %d to %d\n", short_min, short_max);
  printf("Signed int: %d to %d\n", int_min, int_max);
  printf("Signed long: %ld to %ld\n", long_min, long_max);

  printf("########################################\n");
  printf("Floating point ranges:\n");
  printf("Float: %f to %f\n", FLT_MIN, FLT_MAX);
  printf("Double: %f to %f\n", DBL_MIN, DBL_MAX);

  return 0;
}

