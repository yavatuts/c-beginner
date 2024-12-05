#include "stdio.h"

int main() {
  float num1 = 7.3, num2;
  float *ptr = &num1;
  num2 = *ptr;

  printf("%.2f\n", num2);
  printf("%p\n", &num2);
  printf("%p\n", ptr);

  return 0;
}
