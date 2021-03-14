/*****

Exercise 1-17. Write a program to print all input lines that are longer
than 80 characters.

*****/

#include <stdio.h>
#define MAXCHAR 10000 // maximum number of input characters

void selectivePrint(int s[]) {
  int lineCount, lower, i, j;
  lineCount = lower = i = 0;

  printf("Printing lines longer than 80 characters:\n\n");

  while (s[i] != '\0') {
    if (s[i] != '\n') {
      lineCount++;
      i++;
    } else {
      if (lineCount > 80) {
        for (j = lower; j < i; j++) {
          putchar(s[j]);
        }
        putchar('\n');
      }
      lineCount = 0;
      i++;
      lower = i;
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
  //print(input);
  return 0;
}
