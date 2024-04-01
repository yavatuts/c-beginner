#include "stdio.h"
#define N 10

int main() {
  int numbers[N];
  int negativeCount=0, positiveCount=0;
  for(int i=0; i<N; i++) {
    printf("Enter %ith number : ", i+1);
    scanf("%i", &numbers[i]);
  }

  printf("Negative numbers are : \n");
  for(int i=0; i<N; i++) {
    if(numbers[i] < 0) {
      printf("%4i", numbers[i]);
      negativeCount++;
    }
  }
  printf("\n(Total : %i)\n", negativeCount);

  printf("\nPositive numbers are : \n");
  for(int i=0; i<N; i++) {
    if(numbers[i] > 0) {
      printf("%4i", numbers[i]);
      positiveCount++;
    }
  }
  printf("\n(Total : %i)\n", positiveCount);

  return 0;
}
