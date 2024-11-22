#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

bool is_palindrome(char[], int);

int main() {
  char s[MAX_SIZE];
  printf("Enter your sentence: ");
  fgets(s, MAX_SIZE, stdin);
  if (is_palindrome(s, strlen(s))) {
    printf("Palindrome!");
  } else {
    printf("Not palindrome!");
  }
  return 0;
}

bool is_palindrome(char s[], int len) {
  for (int i = 0; i < len - i - 2; i++) {
    if (s[i] != s[len - i - 2]) {
      return false;
    }
  }
  return true;
}
