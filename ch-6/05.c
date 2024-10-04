#include <stdio.h>

int main() {
  int arr[5], i;
  printf("enter five numbers: ");
  for (i = 0; i < 5; i++)
    scanf("%d", &arr[i]);
  printf("the reverse output is: ");
  for (i = 4; i >= 0; i--)
    printf("%4d", *(arr + i));
  return 0;
}
