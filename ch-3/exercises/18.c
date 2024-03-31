#include <stdio.h>

int main(int argc, char const *argv[]) {
  double n;
  printf("Enter number : ");
  scanf("%lf", &n);
  printf("%i\n", (int)n);
  double fp = n-(int)n;
  while(fp-(int)fp >= 0.1) {
    fp *= 10;
  }
  printf("%i\n", (int)fp);
  return 0;
}
