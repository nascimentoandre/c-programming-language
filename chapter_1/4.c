/******

Exercise 1-4. Write a program to print the corresponding Celsius to Fahrenheit table.

******/

#include <stdio.h>

int main () {
  float celsius, fahr;
  int lower, upper, step;

  lower = -20;
  upper = 150;
  step = 10;

  celsius = lower;

  printf("Celsius\tFahrenheit\n");
  while (celsius <= upper) {
    fahr = ((9.0/5.0) * celsius) + 32.0;
    printf("%4.0f\t%6.0f\n", celsius, fahr);
    celsius += step;
  }
  return 0;
}
