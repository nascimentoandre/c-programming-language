/*****

Exercise 1-12. Write a program that prints its input one word per line.

*****/

#include <stdio.h>

#define IN 1
#define OUT 0
#define PREV '-'

int main() {
  int c, previous, state;

  state = OUT;
  previous = PREV;

  while((c = getchar()) != EOF) {
    if (c == ' ' || c == '\t' || c == '\n') {
      state = OUT;
    }
    else if (state == OUT) {
      if (previous == ' ' || previous == '\t' || previous == '\n') {
        putchar('\n');
    }
      state = IN;
      putchar(c);
    }
    else if (state == IN)
      putchar(c);
    previous = c;
  }
}

