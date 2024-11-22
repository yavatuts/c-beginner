#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void removeIterations(char s[], int len) {
  for (int i = 0; i < len; i++) {
    for (int j = i + 1; j <= len; j++) {
      if (s[i] == s[j]) {
        strcpy(&s[j], &s[j + 1]);
        len--;
      }
    }
  }
  s[len] = '\0';
}

int main() {
  char sentence[MAX_SIZE];
  printf("Enter your sentence: ");
  fgets(sentence, MAX_SIZE, stdin);
  removeIterations(sentence, MAX_SIZE);
  printf("New sentence: %s\n", sentence);
  return 0;
}
