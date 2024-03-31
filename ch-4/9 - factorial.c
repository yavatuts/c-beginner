#include <stdio.h>

int factorial(int);

int main () {
  int n;
  printf("Enter number : ");
  scanf("%i", &n);
  printf("Factorial of %i is %i.", n, factorial(n));
  return 0;
}

int factorial(int n) {
  if(n == 0)
    return 1;
  return n * factorial(n-1);
}
