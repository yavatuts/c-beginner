#include <stdio.h>

#define M 5
int main() {
  int i, j, x[M];
  for (i = 0; i < M; i++)
    x[i] = x + i;
  for (i = 0; i < M; i++)
    printf("\n x[%d] = %d", i, *(x + i));
  getchar();

  // prefer address of X is 1024
  // since each integer is 4 bytes it will assign each address
  // to member of array with 4 padding like:
  // 1024, 1028, 1032, 1036, 1040

  return 0;
}