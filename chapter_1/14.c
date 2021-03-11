/*****

Exercise 1-14. Write a program to print a histogram of the frequencies of
different characters in its input.

*****/

#include <stdio.h>

#define MAXCHAR 70 // max number of different characters

_Bool charInList(int c, int list[]) {
  // verifies if element c is in list
  int i = 0;

  while (list[i] != '\0') {
    if (c == list[i]) return 1;
    i++;
  }
  return 0;
}

int getIndex(int element, int list[]) {
  // get the index of the first occurence of element in list
  // we assume that list in fact contains the element
  int i = 0;

  while (list[i] != '\0') {
    if (element == list[i]) return i;
    i++;
  }
}

void plotHistogram(int charList[], int freqList[], int length) {
  for (int i = 0; i < length; i++) {
    printf("%c: ", charList[i]);
    for (int j = 0; j < freqList[i]; j++)
      printf("#");
    printf("\n");
  }
}

int main() {
  int nList[MAXCHAR], cList[MAXCHAR], index, c;
  int currElement = 0;

  for (int i = 0; i < MAXCHAR; i++)
    nList[i] = 0;

  while ((c = getchar()) != EOF) {
    if (c == '\t' || c == ' ' || c == '\n') continue; // I am choosing not to count trailing blanks, tabs and new lines
    if (charInList(c, cList) == 0) {
      cList[currElement] = c;
      nList[currElement] += 1;
      currElement++;
    } else {
      index = getIndex(c, cList);
      nList[index] += 1;
    }
  }

  plotHistogram(cList, nList, currElement);

  return 0;
}

