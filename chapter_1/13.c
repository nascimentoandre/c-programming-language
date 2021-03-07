/*****

Write a program to print a histogram of the lengths of words in its input.
It is easy to draw the histogram with the bars horizontal; a vertical orientation
is more challenging.

*****/

#include <stdio.h>

#define MAX 30 // max length of a word
#define IN 1
#define OUT 0

int main() {
  int nlength[MAX], c, nc, state;
  char previous = '-';

  nc = 0;
  for (int i = 0; i < MAX; i++) nlength[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == ' ' || c == '\n' || c == '\t') {
      state = OUT;
      if (previous != ' ' || c != '\n' || c != '\t') {
        if (nc <= MAX) {
          nlength[nc-1]++;
          nc = 0;
        }
      }
    }
    else if (state == OUT) {
      state = IN;
      ++nc;
    }
    else if (state == IN)
      ++nc;
    previous = c;
  }

  for (int j = 0; j < MAX; j++) {
    printf("%d:\t", j+1);
    for (int k = 0; k < nlength[j]; k++)
      printf("#");
    printf("\n");
  }
}
