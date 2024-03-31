#include <stdio.h>

int main() {
  int year, y2, month, day, hour, min, sec;
  printf("What year is it now : ");
  scanf("%i", &year);
  printf("What is year of your birth : ");
  scanf("%i", &y2);
  year -= y2;
  month = year*12;
  day = month*30;
  hour = day * 24;
  min = hour * 60;
  sec = min*60;
  printf("Your age in : \nYear: %i\nMonth: %i\nDay: %i\nHour: %i\nMin: %i\nSac: %i\n", year, month, day, hour, min, sec);

  return 0;
}
