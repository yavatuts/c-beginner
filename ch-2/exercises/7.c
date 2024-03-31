#include "stdio.h"

int main(int argc, char const *argv[]) {
  int weight;
  printf("Enter wight of product in (KG) : ");
  scanf("%i", &weight);
  printf("Weight in G : %i", weight*1000);
  return 0;
}
