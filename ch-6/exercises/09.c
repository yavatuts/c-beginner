#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_STRINGS 100
#define MAX_LENGTH 100

int main() {
  char *strings[MAX_STRINGS];
  int count = 0;
  char input[MAX_LENGTH];

  printf("Enter strings (press Enter on an empty line to finish):\n");

  // Read strings until an empty line is entered
  while (1) {
    if (fgets(input, sizeof(input), stdin) == NULL) {
      break; // End of file or error
    }

    // Remove newline character if present
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
      input[len - 1] = '\0';
    }

    // Check for empty line
    if (strlen(input) == 0) {
      break;
    }

    // Allocate memory for the string and store it
    strings[count] = (char *)malloc((len + 1) * sizeof(char));
    if (strings[count] == NULL) {
      fprintf(stderr, "Memory allocation failed\n");
      return 1;
    }
    strcpy(strings[count], input);
    count++;

    // Check if we have reached the maximum number of strings
    if (count >= MAX_STRINGS) {
      fprintf(stderr, "Maximum number of strings reached\n");
      break;
    }
  }

  printf("\nStrings starting with 'b':\n");

  // Print strings that start with 'b'
  for (int i = 0; i < count; i++) {
    if (strings[i][0] == 'b' || strings[i][0] == 'B') {
      printf("%s\n", strings[i]);
    }
    // Free allocated memory
    free(strings[i]);
  }

  return 0;
}