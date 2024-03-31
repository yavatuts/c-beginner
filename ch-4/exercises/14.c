#include <stdio.h>

int tof(int);

int main() {
  int c;
  while(1) {
    scanf("%i", &c);
    printf("%ic is %iF\n", c, tof(c));
  }
  return 0;
}


int tof(int c) {
  return (c * 9/5) + 32;
}
