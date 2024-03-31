#include <stdio.h>

float avg(float, float, float);

int main() {
  float a,b,c;
  printf("Enter 3 float numbers : \n");
  scanf("%f%f%f", &a, &b, &c);
  printf("Average : %.2f", avg(a, b, c));
  return 0;
}

float avg(float a, float b, float c) {
  return (a+b+c)/3;
}
