#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100
#define COUNT 10

int main() {
  char name[COUNT][MAX_SIZE];
  char *ptr[COUNT], *temp;
  int index = 0;

  while (index < COUNT) {
    printf("enter name of number %d: ", index + 1);
    fgets(name[index], MAX_SIZE, stdin);
    name[index][strlen(name[index]) - 1] = '\0';
    *(ptr + index) = name[index];
    index++;
  }
  for (int i = 0; i < COUNT - 1; i++)
    for (int j = i + 1; j < COUNT; j++)
      if (strcmp(*(ptr + i), *(ptr + j)) > 0) {
        temp = *(ptr + i);
        *(ptr + i) = *(ptr + j);
        *(ptr + j) = temp;
      }
  printf("the sorted list: \n");
  for (int i = 0; i < COUNT; i++)
    printf("%3dth name is: %s \n", i + 1, *(ptr + i));

  return 0;
}
