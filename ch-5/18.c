#include <stdio.h>
#include <string.h>

int main() {
  char string[81];
  int position;
  printf("Type a string: ");
  gets(string);
  printf("Enter position for delete character: ");
  scanf("%d", &position);
  strcpy(&string[position], &string[position+1]);
  printf("The result string is: ");
  puts(string);
  return 0;
}
