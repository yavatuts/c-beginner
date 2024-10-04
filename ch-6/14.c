#include <stdio.h>

int main() {
  int x, *p, **q;

  x = 10;
  p = &x;
  q = &p;
  printf("the q points to value: %d \n", **q);

  return 0;
}
