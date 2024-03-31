#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[]) {
  int a,b,c,x1, x2, delta;
  printf("Enter A : ");
  scanf("%i", &a);
  printf("Enter B : ");
  scanf("%i", &b);
  printf("Enter C : ");
  scanf("%i", &c);
  delta = b*b-4*a*c;
  x1 = (-b+sqrt(delta))/(2*a);
  x2 = (-b-sqrt(delta))/(2*a);
  printf("X1 is : %i\n", x1);
  printf("X2 is : %i\n", x2);
  return 0;
}
