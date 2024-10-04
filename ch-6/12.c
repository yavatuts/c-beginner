#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
#define COUNT 5

int main() {
  int dex;
  char name[MAX_SIZE];

  char *list[COUNT] = {"hamed", "kimia", "kim", "mia", "mahmoud"};

  printf("enter a name for search: ");
  fgets(name, MAX_SIZE, stdin);
  name[strlen(name) - 1] = '\0';

  for (dex = 0; dex < COUNT; dex++)
    if (!strcmp(list[dex], name))
      break;
  if (dex == COUNT)
    printf("name <%s> not exist. \n", name);
  else
    printf("name <%s> exist. \n", name);

  return 0;
}
