#include "stdio.h"

int main() {
  float a,b;
  printf("Enter two numbers to calc: ");
  scanf("%f %f", &a, &b);
  printf("A+B = %.2f\n", a+b);
  printf("A-B = %.2f\n", a-b);
  printf("A*B = %.2f\n", a*b);
  printf("A/B = %.2f\n", a/b);
  return 0;
}
