#include <stdio.h>

int main(int argc, char const *argv[]) {
  double n;
  int i=0, j=0;
  printf("Enter number : ");
  scanf("%lf", &n);
  while(n-(int)n != 0) {
    n *= 10;
    i++;
  }
  int num = (int) n;
  while(num != 0) {
    printf("%i", (num%10));
    num /= 10;
    j++;
    if(i == j) {
      printf(".");
    }
  }
  printf("\n");
  return 0;
}
