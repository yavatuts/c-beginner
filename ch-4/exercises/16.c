#include <stdio.h>

void floatcalc(float a, float b) {
  printf("A+B : %.2f\n", a+b);
  printf("A-B : %.2f\n", a-b);
  printf("A*B : %.2f\n", a*b);
  printf("A/B : %.2f\n", a/b);
}

int main() {
  float a, b;
  printf("Enter A and B : ");
  scanf("%f%f", &a, &b);
  floatcalc(a, b);
  return 0;
}
