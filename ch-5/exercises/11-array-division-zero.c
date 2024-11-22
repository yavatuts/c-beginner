#include <stdio.h>

void devide_numbers(int[], int);

int main() {
  int count;
  printf("Enter count of numbers: ");
  scanf("%i", &count);
  int numbers[count];
  for (int i = 0; i < count; i++) {
    scanf("%i", &numbers[i]);
    getchar();
  }

  devide_numbers(numbers, count);

  printf("\nResult: ");
  for (int i = 0; i < count; i++) {
    printf("%i, ", numbers[i]);
  }
  printf("\n");

  return 0;
}

void devide_numbers(int numbers[], int count) {
  int index = 0, dir = -1, mid = count / 2, target = mid + (index * dir);
  while (numbers[target] == 0 && target >= 0 && target < count) {
    dir = -dir;
    if (dir == 1) {
      index++;
    }

    target = mid + (index * dir);
  }
  int divide_by = numbers[target];

  if (divide_by == 0) {
    printf("all numbers are zeros!\n");
    return;
  }

  for (int i = 0; i < count; i++) {
    if (numbers[i] != 0) {
      numbers[i] /= divide_by;
    }
  }
}