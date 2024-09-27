#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100
#define ASCII_SIZE 256

void countOccurrences(char[], int);

int main() {
  char s[MAX_SIZE];
  printf("Enter your sentence: ");
  fgets(s, MAX_SIZE, stdin);
  countOccurrences(s, strlen(s));
  return 0;
}

void countOccurrences(char s[], int len) {
  char count[ASCII_SIZE] = {0};
  for (int i = 0; i < len; i++) {
    count[(unsigned char)s[i]]++;
  }
  for (int i = 0; i < ASCII_SIZE; i++) {
    if (count[i] > 0) {
      printf("%c: %i\n", i, count[i]);
    }
  }
}
