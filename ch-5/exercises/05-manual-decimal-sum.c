#include <stdio.h>

#define MAX_SIZE 22
#define DIGITS 20

void readNumbers(char n1[], char n2[]) {
  printf("Enter number 1: ");
  fgets(n1, MAX_SIZE, stdin);
  printf("Enter number 2: ");
  fgets(n2, MAX_SIZE, stdin);

  for (char i = 0; i <= DIGITS; i++) {
    n1[i] -= 48;
    n2[i] -= 48;
  }
}

void printSum(int n[]) {
  for (char i = 0; i < DIGITS + 1; i++) {
    printf("%i", n[i]);
  }
  printf("\n");
}

void addNums(char n1[], char n2[], int output[]) {
  int carry = 0;
  for (int i = DIGITS - 1; i >= 0; i--) {
    int x = carry + n1[i] + n2[i];
    if (x > 9) {
      x -= 10;
      carry = 1;
    } else {
      carry = 0;
    }
    output[i + 1] = x;
  }
  if (carry) {
    output[0] = carry;
  }
}

int main() {
  char n1[MAX_SIZE], n2[MAX_SIZE];
  int output[DIGITS + 1];
  readNumbers(n1, n2);
  addNums(n1, n2, output);
  printSum(output);
  return 0;
}