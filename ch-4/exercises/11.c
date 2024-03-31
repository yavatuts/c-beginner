#include <stdio.h>

int fib(int);

int main() {
  for(int i=1; i<20; i++) {
    printf("%i ", fib(i));
  }
  return 0;
}

int fib(int n) {
  if(n > 1) {
    return fib(n-2) + fib(n-1);
  }
  return 1;
}
