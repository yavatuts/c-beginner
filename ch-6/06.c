#include <stdio.h>
#include <stdlib.h>

void pinput(int *, int);
void bubble(int *, int);
void median(int *, int, float *);
void pout(int *, int);

int main() {
  int n, i;
  int *p;
  float mead;

  printf("enter number of items(n): ");
  scanf("%d", &n);
  p = (int *)malloc(n * sizeof(int));
  if (!p) {
    printf("aloocation failure! \n");

    exit(1);
  }
  pinput(p, n);
  bubble(p, n);
  printf("sorted data are: ");
  pout(p, n);
  median(p, n, &mead);
  printf("median = %5.2f \n", mead);

  return 0;
}

void pinput(int *p, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("enter number %d: ", i + 1);
    scanf("%d", p + i);
  }
}

void bubble(int *temp, int len) {
  int i, j, item;
  for (i = len - 1; i > 0; i--)
    for (j = 0; j < i; j++)
      if (*(temp + j) > *(temp + j + 1)) {
        item = *(temp + j);
        *(temp + j) = *(temp + j + 1);
        *(temp + j + 1) = item;
      } // end of if
}

void median(int *x, int n, float *mead) {
  if (n % 2 == 0)
    *mead = (float)(*(x + ((n - 1) / 2)) + *(x + (n / 2))) / 2;
  else
    *mead = *(x + (n - 1) / 2);
}

void pout(int *p, int n) {
  int i;
  for (i = 0; i < n; i++) {
    printf("%3d", *(p + i));
  }
  printf("\n");
}
