#include <stdio.h>
#define MAX_SIZE 100

void shiftArray(int arr[], int start);

int main() {
  int nums[MAX_SIZE], index = 0, count = 0, x = 0;

  do {
    printf("Enter number (0 to end) : ");
    scanf("%i", &x);
    // find index
    for (index = 0; index < count; index++) {
      if (x < nums[index]) {
        break;
      }
    }
    shiftArray(nums, index);
    nums[index] = x;
    count++;

  } while (x != 0);

  for (int i = 0; i < count; i++) {
    printf("%i ", nums[i]);
  }

  return 0;
}

void shiftArray(int arr[], int start) {
  for (int i = MAX_SIZE - 1; i >= start; i--) {
    arr[i] = arr[i - 1];
  }
}