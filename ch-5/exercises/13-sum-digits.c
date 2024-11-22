#include <stdio.h>
#include <string.h>
#define MAX_SIZE 100

int extractNumber(char[], int);
int sum(char[]);

int main() {
  char s[MAX_SIZE];
  printf("Enter string (contains digits): ");
  fgets(s, MAX_SIZE, stdin);
  printf("Sum of numbers: %i\n", sum(s));
  return 0;
}

int sum(char s[]) {
  int n_sum = 0;
  for (int i = strlen(s) - 1; i >= 0; i--) {
    if (s[i] >= '0' && s[i] <= '9') {
      int n = extractNumber(s, i);
      n_sum += n;
      i -= (n / 10);
    }
  }
  return n_sum;
}

int extractNumber(char s[], int index) {
  int sum = 0;
  int counter = 1;
  printf("\n", sum);
  for (int i = index; i >= 0 && s[i] >= '0' && s[i] <= '9'; i--) {
    sum += (s[i] - '0') * counter;
    counter *= 10;
  }
  return sum;
}
