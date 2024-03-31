#include <stdio.h>
#include <math.h>

void equ(int, int, int);

int main() {
  int a, b, c;
  printf("Zarayeb : ");
  scanf("%i%i%i", &a, &b, &c);
  equ(a, b, c);
  return 0;
}

void equ(int a, int b, int c) {
  int r1,r2;
  r1 = (-b+(sqrt(b*b-4*a*c))) / (2*a);
  r2 = (-b-(sqrt(b*b-4*a*c))) / (2*a);
  printf("Rishe1 : %i\n", r1);
  printf("Rishe2 : %i\n", r2);
}
