#include <stdio.h>

#define MAX_SIZE 100

int char_count(char *, char);

int main() {
  char string[MAX_SIZE], ch;
  int count;
  printf("enter string for search: ");
  fgets(string, MAX_SIZE, stdin);
  printf("enter a character: ");
  ch = getchar();
  count = char_count(string, ch);
  printf("number of occurs of char <%c> is: %d\n", ch, count);

  return 0;
}

int char_count(char *s, char letter) {
  int count = 0;
  while (*s)
    if (*s++ == letter)
      count++;
  return (count);
}
