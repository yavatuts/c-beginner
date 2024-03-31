#include <stdio.h>

float area(float);

int main() {
  float r;
  printf("Enter R : ");
  scanf("%f", &r);
  printf("S : %.2f", area(r));
  return 0;
}

float area(float r) {
  return 3.14 * r * r;
}
