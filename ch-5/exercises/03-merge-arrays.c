#include <stdbool.h>
#include <stdio.h>

void inputNumbers(int numbers[], int size) {
  // Input numbers from user
  for (int i = 0; i < size; i++) {
    printf("Enter number %d: ", i + 1);
    scanf("%d", &numbers[i]);
  }
}

void printNumbers(int numbers[], int size) {
  // Print numbers to console
  for (int i = 0; i < size; i++) {
    printf("%d ", numbers[i]);
  }
  printf("\n");
}

void bubbleSort(int numbers[], int size) {
  // Bubble sort algorithm
  bool swapped;
  do {
    swapped = false;
    for (int i = 0; i < size - 1; i++) {
      if (numbers[i] > numbers[i + 1]) {
        int temp = numbers[i];
        numbers[i] = numbers[i + 1];
        numbers[i + 1] = temp;
        swapped = true;
      }
    }
  } while (swapped);
}

void mergeArrays(int n1[], int size1, int n2[], int size2, int output[],
                 int sizeOut) {
  int i1 = 0, i2 = 0;
  for (int iOut = 0; iOut < sizeOut; iOut++) {
    if (i1 == size1) {
      output[iOut] = n2[i2];
      i2++;
    } else if (i2 == size2) {
      output[iOut] = n1[i1];
      i1++;
    } else if (n1[i1] < n2[i2]) {
      output[iOut] = n1[i1];
      i1++;
    } else {
      output[iOut] = n2[i2];
      i2++;
    }
  }
}

int main() {
  // Test the functions
  int size = 5;
  int numbers1[size], numbers2[size], numbersOut[size * 2];
  inputNumbers(numbers1, size);
  inputNumbers(numbers2, size);
  bubbleSort(numbers1, size);
  bubbleSort(numbers2, size);
  mergeArrays(numbers1, size, numbers2, size, numbersOut, size * 2);
  printNumbers(numbersOut, size * 2);
  return 0;
}
