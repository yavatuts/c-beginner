#include <stdio.h>

int main() {
  int first[10], second[10];
  int *p, t;
  p = first;
  for (t = 0; t < 20; t++)
    *p++ = t;
}
