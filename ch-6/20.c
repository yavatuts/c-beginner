#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int t, i;

  if (argc < 2) {
    printf("number of parameters is wrong.\n");
    printf("usage: PROG arg.\n");
    exit(0);
  }
  for (t = 0; t < argc; ++t)
    for (i = 0; argv[t][i]; i++)
      printf("\n %c ", argv[t][i]);

  return 0;
}
