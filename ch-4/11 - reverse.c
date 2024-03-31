#include <stdio.h>

void reverse(int);

int main() {
  int x = 0;
  printf("Enter number : ");
  scanf("%i", &x);
  printf("Reverse of %i = ", x);
  reverse(x);
  return 0;
}

void reverse(int x) {
  if(x < 10)
    printf("%i", x);
  else {
    printf("%i", x%10);
    reverse(x / 10);
  }
}
