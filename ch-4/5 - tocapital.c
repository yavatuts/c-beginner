#include <stdio.h>

char tocapital(char);

int main() {
  printf("Enter a character : ");
  char c = getchar();
  printf("Capitalized %c is %c", c, tocapital(c));
  return 0;
}

char tocapital(char c) {
  if(c >= 'a' && c <= 'z')
    c -= 32;
  return c;
}
