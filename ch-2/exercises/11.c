#include "stdio.h"
#include "math.h"

int main(int argc, char const *argv[]) {
  double weightOfMoleculeOfWater = 3.0 * pow(10, -23);
  int litre;
  printf("Enter litre of water : ");
  scanf("%i", &litre);
  printf("Molecules in %i litre of water is : %.0f", litre, litre*950/weightOfMoleculeOfWater);
  return 0;
}
