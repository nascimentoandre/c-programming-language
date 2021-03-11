/*****

Exercise 1-19. Write a function reverse(s) that reverses the character
string s. Use it to write a program that reverses its input a line
at a time.

*****/

#include <stdio.h>

void reverse(char s[], int length) {
  for (int i=length-1; i >= 0; i--) {
    printf("%c", s[i]);
  }
}

int main() {
  #define MAXLINE 1000 // maximum input line size
  char myStr[MAXLINE];
  int c, i;

  i = 0;
  while ((c = getchar()) != EOF) {
    if (c != '\n') {
      myStr[i] = c;
      i++;
    } else {
      reverse(myStr, i);
      printf("\n");
      i = 0;
    }
  }
  return 0;
}
