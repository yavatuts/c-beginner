#include <stdio.h>

void f1(int ,int);

int main() {
  int x, y;
  scanf("%i%i", &x, &y);
  printf("You entered : %i %i\n", x, y);
  f1(x, y);
  printf("After call f1 numbers are : %i %i\n", x, y);
  return 0;
}

void f1(int x, int y) {
  printf("f1 recieved %i %i\n", x, y);
  x++;
  y++;
}
