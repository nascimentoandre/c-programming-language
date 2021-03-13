/*****

Exercise 1-17. Write a program to print all input lines that are longer
than 80 characters.

*****/

#include <stdio.h>
#define MAXCHAR 10000 // maximum number of input characters

void selectivePrint(int s[]) {
  int lineCount, lower, i;
  lineCount = lower = i = 0;

  while (s[i] != '\0') {
    if (s[i] != '\n')
      lineCount++;
    else {
      if (lineCount < 80) {
        for (int j = lower; j <= i; j++)
          printf("%c", s[j]);
      }
      lineCount = 0;
      lower = i+1; // check this, probably will cause a bug
      i++;
    }
  }
}

int main() {
  int i, c, input[MAXCHAR-1]; // making room for the final \0 char

  i=0;
  while ((c = getchar()) != EOF && i < MAXCHAR) {
    input[i] = c;
    i++;
  }

  input[i+1] = '\0';
  selectivePrint(input);
  return 0;
}


