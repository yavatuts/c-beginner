#include <stdio.h>

int findmax(int, int, int);

int main() {
  int n1, n2, n3;
  scanf("%i%i%i", &n1, &n2, &n3);
  printf("MAx is %i", findmax(n1, n2, n3));
  return 0;
}

int findmax(int n1, int n2, int n3) {
  int max = (n1 > n2) ? n1 : n2;
  max = (max > n3) ? max : n3;
  return max;
}
