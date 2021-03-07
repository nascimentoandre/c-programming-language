/*******

Exercise 1-10. Write a program to copy its input to its output, replacing each tab by
\t, each backspace by \b, and each backslash by \\. This makes tabs and
backspaces visible in an unambiguous way.

*******/

#include <stdio.h>

// Not quite sure I understood the problem, though
int main() {
  long c;

  while ((c = getchar()) != EOF) {
    if (c == '\t') putchar('\t');
    else if (c == '\b') putchar('\b');
    else if (c == '\\') putchar('\\');
    else putchar(c);
  }
}
