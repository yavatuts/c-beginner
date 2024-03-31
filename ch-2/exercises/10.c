#include "stdio.h"

int main(int argc, char const *argv[]) {

  float b,h;
  printf("Enter B of triangle : ");
  scanf("%f", &b);
  printf("Enter H of triangle : ");
  scanf("%f", &h);
  printf("Area of triangle : %f", (b*h) / 2);

  return 0;
}
