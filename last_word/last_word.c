#include <stdio.h>

int isBlank(char c) {
  if (c == ' ' || c == '\t') {
    return 1;
  }
  return 0;
}

void printLastWord(char* s1, int fc, int lc) {
  int j = fc;
  while (j <= lc) {
    printf("%c", s1[j]);
    j++;
  }
}

int main(int argc, char** argv) {
  char* s1 = argv[1];
  int i = 0;

  if (argc == 2) {
    while (s1[i]) {
      i++;
    }

    i--;

    int lc = 0;
    int fc = 0;

    while (isBlank(s1[i])) {
      i--;
    }
    lc = i;
    while (i >= 0 && !isBlank(s1[i])) {
      i--;
    }
    fc = ++i;
    printLastWord(s1, fc, lc);
  }
  printf("\n");
  return 0;
}
