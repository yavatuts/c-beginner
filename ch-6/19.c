#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int disp, count;

  if (argc <= 2) {
    printf("number of parameters is wrong.\n");
    printf("usage: number display\n");
    exit(0);
  }
  if (argc == 3 && !strcmp(argv[2], "display"))
    disp = 1;
  else
    disp = 0;
  for (count = atoi(argv[1]); count; --count)
    if (disp)
      printf("%d\n", count);  
  return 0;
}
