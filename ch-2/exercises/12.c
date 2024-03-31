#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[]) {
  double yearInSec = 3.156 * pow(10, 7);
  int age;
  printf("Enter your age : ");
  scanf("%i", &age);
  printf("You aged %.0f secounds!", age*yearInSec);
  return 0;
}
