#include "stdio.h"

#define A4 50
#define PEN 150

int main(int argc, char const *argv[]) {
  float penPrice, a4Price, cpi, total;

  printf("Enter price for pen : ");
  scanf("%f", &penPrice);
  printf("Enter price for a4 : ");
  scanf("%f", &a4Price);

  total = (A4*a4Price) + (PEN*penPrice);

  printf("Enter CPI for next year :");
  scanf("%f", &cpi);
  cpi /= 100.0;

  total += (total * cpi);

  printf("Company budget needed : %i", (int) total);

  return 0;
}
