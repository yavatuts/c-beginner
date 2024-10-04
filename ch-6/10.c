#include <stdio.h>

void int_to_ascii(int, char *);

int main() {
  int number;
  char s[10];
  
  printf("enter a number: ");
  scanf("%d", &number);
  int_to_ascii(number, s);
  printf("the string value is: %s \n", s);
  
  return 0;
}

void int_to_ascii(int value, char *str) {
  int saveval = value;
  char temp, *savestr = str;
  if (value < 0)
    value *= -1;
  do {
    *str++ = (value % 10) + '0';
    value = value / 10;
  } while (value > 0);
  if (saveval < 0)
    *str++ = '-';
  *str-- = '\0';
  while (savestr < str) {
    temp = *str;
    *str-- = *savestr;
    *savestr++ = temp;
  }
}
