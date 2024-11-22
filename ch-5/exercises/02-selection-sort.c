#include <stdio.h>

#define COUNT 10

void input(int stu[]);
void output(int stu[]);
void selectionSort(int stu[]);
int findMinIndex(int stu[], int start);

int main() {

  int stu[COUNT];
  input(stu);
  selectionSort(stu);
  output(stu);

  return 0;
}

void input(int stu[]) {
  for (int i = 0; i < COUNT; i++) {
    printf("Enter the %d stu: ", i + 1);
    scanf("%d", &stu[i]);
  }
}
void output(int stu[]) {
  for (int i = 0; i < COUNT; i++) {
    printf("%d\t", stu[i]);
  }
}

void selectionSort(int stu[]) {
  int minIndex, temp;
  for (int i = 0; i < COUNT; i++) {
    minIndex = findMinIndex(stu, i);
    temp = stu[i];
    stu[i] = stu[minIndex];
    stu[minIndex] = temp;
  }
}

int findMinIndex(int stu[], int start) {
  int minIndex = start;
  for (int i = start; i < COUNT; i++) {
    if (stu[i] < stu[minIndex])
      minIndex = i;
  }
  return minIndex;
}