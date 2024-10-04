#include <stdio.h>

#define MAX_SIZE 100

void ascii_to_int(int *, char *);

int main() {
  int number;
  char s[MAX_SIZE];

  printf("enter numeric string: ");
  fgets(s, MAX_SIZE, stdin);
  ascii_to_int(&number, s);
  printf("numeric value is: %d \n", number);

  return 0;
}

void ascii_to_int(int *value, char *str) {
  int sign = 1;
  *value = 0;
  while (*str == ' ')
    str++;
  if (*str == '-' || *str == '+')
    sign = (*str++ == '-') ? -1 : 1;
  while (*str)
    if ((*str >= '0') && (*str <= '9'))
      *value = (*value * 10) + (*str++ - 48);
    else {
      printf("Warning: the '%c' is invalid character. \n", *str);
      break;
    }
  *value *= sign;
}
