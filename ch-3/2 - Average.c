#include "stdio.h"
int main() {
  int n;
  float sum;
  printf("Enter count of numbers : ");
  scanf("%i", &n);
  for(int i=1; i<=n; i++) {
    float num;
    printf("Enter %ith number : ", i);
    scanf("%f", &num);
    sum += num;
  }
  printf("Average of %i numbers is : %.2f", n, sum/n);
  return 0;
}
