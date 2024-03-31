#include <stdio.h>

int main(int argc, char const *argv[]) {
  int day;
  printf("Enter number of day : ");
  scanf("%i", &day);
  switch (day) {
    case 1:
      printf("Satureday!\n");
      break;
    case 2:
      printf("Sunday!\n");
      break;
    case 3:
      printf("Monday!\n");
      break;
    case 4:
      printf("Tuesday!\n");
      break;
    case 5:
      printf("Wendsday!\n");
      break;
    case 6:
      printf("Thursday!\n");
      break;
    case 7:
      printf("Friday!");
      break;
    default:
      printf("Invalid day number!");

  }
  return 0;
}
