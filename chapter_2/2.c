/*****

Exercise 2-2. Write a loop equivalent to the for loop above without using &&
or ||;

*****/

#include <stdio.h>
#define MAXLENGTH 1000

int main () {
  int s[MAXLENGTH], c, lim, i;
  lim = MAXLENGTH;
  i = 0;

  //for (i=0; i<lim-1 && (c=getchar()) != '\n' && c != EOF; i++) s[i] = c;

  while (i<lim-1) {
    c = getchar();
    if (c == '\n') break;
    else if (c == EOF) break;
    s[i] = c;
    i++;
  }

  return 0;
}

