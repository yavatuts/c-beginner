#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

int str_pos(char s1[], char s2[]);

int main() {
  char s1[MAX_SIZE], s2[MAX_SIZE];
  printf("Enter your haystack: ");
  fgets(s1, MAX_SIZE, stdin);
  printf("Enter your needle: ");
  fgets(s2, MAX_SIZE, stdin);
  int index = str_pos(s1, s2);
  if (index == -1) {
    printf("Not found\n");
  } else {
    printf("Found at %i\n", index);
  }
  return 0;
}

int str_pos(char s1[], char s2[]) {
  int len1 = strlen(s1) - 1, len2 = strlen(s2) - 1;
  for (int i = 0; i < len1; i++) {
    int j;
    for (j = 0; j < len2 && s1[i + j] == s2[j]; j++)
      ;
    if (j == len2) {
      return i;
    }
  }
  return -1;
}
