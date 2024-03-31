#include "stdio.h"

int main() {
  for(int n, factorial=1;;factorial=1) {
    printf("Enter number : ");
    scanf("%i", &n);
    for(int i=2; i<=n; i++) {
      factorial *= i;
    }
    printf("%i! = %i\n", n, factorial);
  }
  return 0;
}
