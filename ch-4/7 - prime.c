#include <stdio.h>

char prime(int);

int main() {
  int n;
  char ans = 'y';
  while(ans == 'y') {
    printf("\nEnter a Number : ");
    scanf("%i", &n);
    if(prime(n))
      printf("%i is prime!\n", n);
    else
      printf("%i is not prime!\n", n);
    printf("Continue ? (y/n) : ");
    ans = getchar();
  }
}

char prime(int n) {
  char isprime = 1;
  for(int i=2; i<=(n/2) && isprime; i++)
    if(n % i == 0)
      isprime = 0;
  return isprime;
}
