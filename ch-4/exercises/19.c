#include <stdio.h>

double power(double, int);

int main() {
  double a;
  int b;
  scanf("%lf%i", &a, &b);
  printf("%.2lf^%i = %.10lf", a, b, power(a, b));
  return 0;
}

double power(double a, int b) {
  double ans = 1;
  if(b > 0) {
    ans = a;
    for(int i=1; i<b; i++) {
      ans *= a;
    }
  } else if( b < 0) {
    b = -b;
    ans = a;
    for(int i=1; i<b; i++) {
      ans *= a;
    }
    ans = 1 / ans;
  }
  return ans;
}
