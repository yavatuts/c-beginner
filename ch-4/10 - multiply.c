#include <stdio.h>

int multiply(int, int);

int main() {
  int x, y;
  printf("Enter to numbers to multiply : ");
  scanf("%i%i", &x, &y);
  printf("%i times of %i = %i", y, x, multiply(x, y));
  return 0;
}

int multiply(int x, int y) {
  if(y == 1)
    return x;
  return x + multiply(x, y-1);
}
