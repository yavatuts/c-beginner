#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAMES 100
#define MAX_NAME_LENGTH 50

void search_and_print_number(char *names[], int *numbers, int count,
                             const char *search_name) {
  for (int i = 0; i < count; i++) {
    if (strcmp(names[i], search_name) == 0) {
      printf("Number for %s: %d\n", search_name, numbers[i]);
      return;
    }
  }
  printf("Name not found.\n");
}

int main() {
  char *names[MAX_NAMES];
  int numbers[MAX_NAMES];
  int count = 0;
  char input_name[MAX_NAME_LENGTH];

  printf("Enter names and numbers (type 'done' to finish):\n");

  while (count < MAX_NAMES) {
    printf("Name: ");
    scanf("%s", input_name);

    // Check if the user wants to stop inputting
    if (strcmp(input_name, "done") == 0) {
      break;
    }

    // Allocate memory for the name and copy it
    names[count] = (char *)malloc(strlen(input_name) + 1);
    if (names[count] == NULL) {
      printf("Memory allocation failed.\n");
      return 1;
    }
    strcpy(names[count], input_name);

    printf("Number: ");
    scanf("%d", &numbers[count]);

    count++;
  }

  // Search for a name
  printf("\nEnter the name to search for: ");
  scanf("%s", input_name);

  search_and_print_number(names, numbers, count, input_name);

  // Free allocated memory
  for (int i = 0; i < count; i++) {
    free(names[i]);
  }

  return 0;
}
