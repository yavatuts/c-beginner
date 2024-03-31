#include <stdio.h>

const int x = 1;

int main() {
  // x = 2   -> Error : Read only variable
  printf("%i", x);
  return 0;
}
