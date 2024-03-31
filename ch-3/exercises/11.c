#include <stdio.h>
#include <math.h>

int main() {
  int a, b, na, nb, n10, i;
  printf("Enter number : ");
  scanf("%i", &na);
  printf("Enter base A : ");
  scanf("%i", &a);
  printf("Enter base B : ");
  scanf("%i", &b);
  n10 = 0;
  i = 0;
  while(na > 0) {
    n10 += (na % 10) * pow(a, i);
    i++;
    na /= 10;
  }
  i = 0;
  nb = 0;
  while(n10 > 0) {
    nb += (n10 % b) * pow(10, i);
    n10 /= b;
    i++;
  }
  printf("(%i)%i -> (%i)%i\n", na, a, nb ,b);
  return 0;
}
