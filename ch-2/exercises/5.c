#include "stdio.h"

int main(int argc, char const *argv[]) {
  float x;
  printf("Enter the value of X : ");
  scanf("%f", &x);
  printf("Result : %5.2f", 1.0/(x*x+x+3));
  return 0;
}
