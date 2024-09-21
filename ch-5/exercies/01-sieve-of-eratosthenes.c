#include <stdbool.h>
#include <stdio.h>
#include <string.h>

int main() {
  int n;
  printf("Enter N: ");
  scanf("%i", &n);
  bool primes[n + 1];
  memset(primes, true, sizeof(primes));

  for (int i = 2; i < n; i++) {
    if (primes[i]) {
      printf("%i\t", i);
      for (int j = i * i; j < n; j += i)
        primes[j] = false;
    }
  }

  return 0;
}