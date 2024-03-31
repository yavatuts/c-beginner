#include "stdio.h"

int main() {
  int a = 10;
  float b = 20;
  printf("Enter two numbers : ");
  scanf("%i %f", &a, &b);
  printf("A is %i, B is %f", a, b);
  return 0;
}
