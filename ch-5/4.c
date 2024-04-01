#include <stdio.h>
#define N 10

void findMod(float x[], int len);

int main() {
  float x[N];
  for(int i=0; i<N; i++) {
    printf("Enter %ith average : ", i+1);
    scanf("%f", &x[i]);
  }
  findMod(x, N);
  return 0;
}

void findMod(float x[], int len) {
  float maxCount = -1, maxValue, currentCount, currentValue;
  for(int i=0; i<len; i++) {
    currentValue = x[i];
    currentCount = 0;
    for(int j=0; j<len; j++)
      if(x[j] == currentValue)
        currentCount++;
    if(currentCount > maxCount) {
      maxCount = currentCount;
      maxValue = currentValue;
    }
  }
  printf("\nThe average with value of %f repeated most times with %f times of repeation!", maxValue, maxCount);
}
