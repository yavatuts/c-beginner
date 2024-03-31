#include <stdio.h>

void printstar(int);

int main() {
  printstar(5);
}

void printstar(int n) {
  if(n==1) {
    printf("*\n");
    return;
  }
  printstar(n-1);
  for(int i=0; i<n; i++)
    printf("*");
  printf("\n");
}
