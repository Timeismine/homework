/*
      1. s1 첫번째 문자 출력
      2. s1 출력된 문자와 다음 문자 비교해서 같지 않으면 출력
      3. s2첫번째 문자와 s1비교 후 같지 않으면 출력
      4. s2 출력된 문자와 다음 문자가 같지 않으면 s1문자와 비교 후
   같지 않으면 출력
 */

#include <stdio.h>

void printChar(char c) { printf("%c", c); }

int compareWordAndString(char* s, int i) {
  char c = s[i];
  int j = 0;

  while (i > j) {
    if (c == s[j]) {
      return 0;
    }
    j++;
  }
  return 1;
}

void printFirstString(char* s) {
  int i = 0;

  while (s[i]) {
    if (compareWordAndString(s, i)) {
      printChar(s[i]);
    }
    i++;
  }
}

int compareS1StringAndS2Word(char* s1, char* s2, int j) {
  int i = 0;
  char target = s2[j];

  while (s1[i]) {
    if (target == s1[i]) {
      return 0;
    }
    i++;
  }
  return 1;
}

void printSecondString(char* s1, char* s2) {
  int i = 0;

  while (s2[i]) {
    if (compareS1StringAndS2Word(s1, s2, i) && compareWordAndString(s2, i)) {
      printChar(s2[i]);
    }
    i++;
  }
}

int main(int argc, char** argv) {
  if (argc != 3) {
    printChar('\n');
    return 0;
  }
  char* s1 = argv[1];
  char* s2 = argv[2];

  printFirstString(s1);
  printSecondString(s1, s2);
  printChar('\n');
  return 0;
}