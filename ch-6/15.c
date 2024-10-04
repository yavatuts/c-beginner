#include <stdio.h>

int main() {
  int x, *p;
  x = 10;
  *p = x;
  printf("%d\n", *p);
  return 0;
}
