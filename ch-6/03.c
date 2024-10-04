#include <stdio.h>

void winput(int *, int *);
void rect(int, int, int *, int *);

int main() {
  int len, wid, area, per;
  winput(&len, &wid);
  rect(len, wid, &area, &per);
  printf("length = %d, width = %d \n", len, wid);
  printf("area = %d, perimer = %d \n", area, per);
  return 0;
}

void winput(int *p1, int *p2) {
  printf("enter length, width: ");
  scanf("%d%d", p1, p2);
}

void rect(int x, int y, int *a, int *p) {
  *a = x * y;
  *p = 2 * (x + y);
}
