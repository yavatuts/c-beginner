#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  if (argc != 4) {
    fprintf(stderr, "Usage: %s num1 num2 num3\n", argv[0]);
    return 1;
  }

  int num1 = atoi(argv[1]);
  int num2 = atoi(argv[2]);
  int num3 = atoi(argv[3]);

  int max = num1;

  if (num2 > max)
    max = num2;
  if (num3 > max)
    max = num3;

  printf("The maximum number is: %d\n", max);
  return 0;
}