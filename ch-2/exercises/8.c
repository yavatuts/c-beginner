#include "stdio.h"

#define EMPLOYES 2
#define SALARY 75000

int main(int argc, char const *argv[]) {
  printf("%i employes get each month %itoman for salary.\n", EMPLOYES, SALARY);
  printf("We increase their salary by 13.5%%\n");
  printf("Company budget needed : %i\n", (int) (EMPLOYES*(SALARY*1.135)));
  printf("Company budget increases : %i\n", (int) (EMPLOYES*(SALARY*0.135)));
  return 0;
}
