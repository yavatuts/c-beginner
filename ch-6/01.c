#include <stdio.h>
#include <stdlib.h>

int main() {
  int *x, *y, s;
  x = (int *)malloc(sizeof(int));
  if (!x) {
    printf("allocation failure.\n");
    exit(1);
  }
  y = (int *)malloc(sizeof(int));
  if (!y) {
    printf("allocation failure.\n");
    exit(1);
  }
  printf("enter two integers: ");
  scanf("%d%d", x, y);
  s = *x * *x + *y * *y;
  printf("sum of square is: %d\n", s);
  free(x);
  free(y);
  return 0;
}
