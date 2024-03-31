#include <stdio.h>

void increment();
int main() {
  register int i;
  for(i=0; i<5; i++) {
    increment();
  }
  return 0;
}

void increment() {
  static int x = 1;
  auto int y = 1;
  printf("X: %i, Y: %i\n", x, y);
  x++;
  y++;
}
