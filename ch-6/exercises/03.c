#include <stdio.h>

#define STRING_SIZE 80

int mystery2(const char *s);

int main() {
  char string[STRING_SIZE];
  printf("\nEnter a string: ");
  scanf("%s", string);
  printf("%d\n", mystery2(string));
  return 0;
}

int mystery2(const char *s) {
  int x = 0;
  for (; *s != '\0'; s++)
    ++x;
  return x;
}
