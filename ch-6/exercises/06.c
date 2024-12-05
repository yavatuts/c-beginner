#include <stdio.h>
#include <string.h>

void printReverse(char *str);

int main() {
  char str[100];

  printf("Enter a string: ");
  if (fgets(str, sizeof(str), stdin) != NULL) {
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n') {
      str[len - 1] = '\0';
    }

    printReverse(str);
  } else {
    printf("Failed to read input.\n");
  }

  return 0;
}

void printReverse(char *str) {
  char *end = str + strlen(str) - 1;

  printf("Reversed string: ");
  while (end >= str) {
    putchar(*end);
    end--;
  }
  putchar('\n');
}
