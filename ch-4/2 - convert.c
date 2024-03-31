#include <stdio.h>

void convert(void);

int main() {
  convert();
  return 0;
}

void convert(void) {
  int h, m, s;
  printf("Enter Hours, Minutes, Seconds : ");
  scanf("%i%i%i", &h, &m, &s);
  int ans = (h * 60 + m) * 60 + s;
  printf("Time in seconds is %i.", ans);
}
