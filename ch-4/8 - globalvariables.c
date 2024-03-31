#include "stdio.h"

int n, sum=0;

void input();
void square();

void main() {
  int i=5;
  printf("Enter five numbers :\n");
  for(int j=0; j<i; j++) {
    input();
  }
  printf("Sum of squares : %i", sum);
}

void input() {
  scanf("%i", &n);
  square();
  sum += n;
}

void square() {
  n = n * n;
}
