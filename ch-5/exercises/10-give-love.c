#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void give_love(char[]);

int main() {
  char s[MAX_SIZE];
  printf("Enter your sentence: ");
  fgets(s, MAX_SIZE, stdin);
  give_love(s);
  printf("After love: %s\n", s);
  return 0;
}

void give_love(char s[]) {
  int count = 0;
  for (int i = 0; i < strlen(s); i++) {
    if (s[i] >= 'a' && s[i] <= 'z')
      count++;
    else if (count == 4 && i > 4) {
      s[i - 4] = 'l';
      s[i - 3] = 'o';
      s[i - 2] = 'v';
      s[i - 1] = 'e';
      count = 0;
    } else {
      count = 0;
    }
  }
}