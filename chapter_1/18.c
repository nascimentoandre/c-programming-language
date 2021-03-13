/*****

Exercise 1-18. Write a program to remove trailing blanks and tabs from
each line of input, and to delete blank lines.

*****/

#include <stdio.h>

void r(char s[]) {
  int i = 0;
  char previous = '-';

  while (s[i] != '\0') {
    if (s[i] != ' ' && s[i] != '\t') {
      if (!(s[i] == '\n' && previous == '\n'))
        printf("%c", s[i]);
      previous = s[i];
    }
    i++;
  }
}

int main() {
  #define MAXCHAR 10000 // max input text size
  int c, i;
  char s[MAXCHAR];

  i = 0;
  while ((c = getchar()) != EOF) {
    s[i] = c;
    i++;
  }

  r(s);
  return 0;
}
