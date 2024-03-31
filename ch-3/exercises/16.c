#include <stdio.h>

int main(int argc, char const *argv[]) {
  float a=1, b=1;
  while (1) {
    printf("Enter a : ");
    scanf("%f", &a);
    printf("Enter b : ");
    scanf("%f", &b);
    if(a == 0 && b == 0)
      break;
    printf("Result : %.2f\n", (a*b)-(a/b));
  }
  return 0;
}
