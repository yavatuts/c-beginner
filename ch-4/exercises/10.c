#include <stdio.h>

void countdown(int);

int main() {
  countdown(10);
}

void countdown(int n) {
  if(n == 0)
    return;
  printf("%i\n", n);
  countdown(n-1);
}
