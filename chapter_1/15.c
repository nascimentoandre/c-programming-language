/*****

Exercise 1-15. Rewrite the temperature convesion program of Section 1.2
to use a function for conversion.

*****/

#include <stdio.h>

#define LOWER 0
#define UPPER 200
#define STEP 20

void convert(int lower, int upper, int step) {
  float fahr, celsius;
  fahr = lower;

  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr - 32.0);
    printf("%5.0f\t%14.1f\n", fahr, celsius);
    fahr += step;
  }
}

int main () {

  printf("Farenheit\tCelsius\n");

  convert(LOWER, UPPER, STEP);

  return 0;
}

