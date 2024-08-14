/*
      1. s1 첫번째 문자 출력
      2. s1 출력된 문자와 다음 문자 비교해서 같지 않으면 출력
      3. s2첫번째 문자와 s1비교 후 같지 않으면 출력
      4. s2 출력된 문자와 다음 문자가 같지 않으면 s1문자와 비교 후
   같지 않으면 출력
 */

#include <stdio.h>

int main(int argc, char** argv) {
  if (argc != 3) {
    printf("\n");
    return 0;
  }
  char* s1 = argv[1];
  char* s2 = argv[2];

  printf("%c", s1[0]);

  int i = 1;
  int n = 0;

  while (s1[i] != '\0') {
    while (i != n) {
      if (s1[i] != s1[n])
        n++;
      else
        break;
    }
    if (i == n) {
      printf("%c", s1[i]);
    }
    n = 0;
    i++;
  }

  i = 0;
  while (s1[i] != '\0') {
    if (s1[i] != s2[0])
      i++;
    else
      break;
  }
  if (s1[i] == '\0') {
    printf("%c", s2[0]);
  }

  int j = 1;
  int k = 0;

  while (s2[j] != '\0') {
    i = 0;
    while (s1[i] != '\0') {
      if (s1[i] != s2[j])
        i++;
      else
        break;
    }
    if (s1[i] == '\0') {
      while (j != k) {
        if (s2[j] != s2[k])
          k++;
        else
          break;
      }
      if (j == k) {
        printf("%c", s2[j]);
      }
      k = 0;
    }
    j++;
  }
  printf("\n");
  return (0);
}