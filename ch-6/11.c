#include <stdio.h>

#define MAX_SIZE 100

int main() {
  char *text = "your name is: ";
  char name[MAX_SIZE];

  printf("enter your name: ");
  fgets(name, MAX_SIZE, stdin);
  printf("%s", text);
  puts(name);

  return 0;
}
