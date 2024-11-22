#include <stdbool.h>
#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void countStuff(char[]);
bool is_vowel(char);

int main() {
  char s[MAX_SIZE];
  printf("Enter your sentence: ");
  fgets(s, MAX_SIZE, stdin);
  countStuff(s);
  return 0;
}

void countStuff(char s[]) {
  int lowers = 0, uppers = 0, digits = 0, vowels = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= 'a' && s[i] <= 'z') {
      lowers++;
    } else if (s[i] >= 'A' && s[i] <= 'Z') {
      uppers++;
    } else if (s[i] >= '0' && s[i] <= '9') {
      digits++;
    }
    if (is_vowel(s[i])) {
      vowels++;
    }
  }
  printf("Lowers: %i\n", lowers);
  printf("Uppers: %i\n", uppers);
  printf("Digits: %i\n", digits);
  printf("Vowels: %i\n", vowels);
}

bool is_vowel(char ch) {
  char vowels[] = "aeiou";
  for (int i = 0; i < strlen(vowels); i++) {
    if (ch == vowels[i] || ch == vowels[i] - 32) {
      return true;
    }
  }
  return false;
}