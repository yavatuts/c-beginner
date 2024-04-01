#include "stdio.h"

int main() {
  int avg[10];
  int maxi=0;
  for(int i=0; i<10; i++) {
    printf("Enter %ith average : ", i+1);
    scanf("%i", &avg[i]);
  }
  for(int i=0; i<10; i++) {
    if(avg[i] > avg[maxi])
      maxi = i;
  }
  printf("The max average found at %ith array : %i", maxi+1, avg[maxi]);
  return 0;
}
