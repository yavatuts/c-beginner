#include "stdio.h"

int main() {
  float n, sum=0;
  printf("Enter N : ");
  scanf("%f", &n);
  for(float x=1, i=1;  i<=n;  i++, x*=2) {
    sum += 1/x;
  }
  printf("Sum : %.2f", sum);
}
