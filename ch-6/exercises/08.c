#include <ctype.h>
#include <stdio.h>

float strtofloat(const char *str) {
  float result = 0.0;
  float fraction = 0.1;
  int sign = 1;
  int isFraction = 0;

  // Check for negative sign
  if (*str == '-') {
    sign = -1;
    str++;
  } else if (*str == '+') {
    str++;
  }

  // Parse the integer part
  while (isdigit(*str)) {
    result = result * 10 + (*str - '0');
    str++;
  }

  // Check for decimal point
  if (*str == '.') {
    str++;
    isFraction = 1;
  }

  // Parse the fractional part
  while (isFraction && isdigit(*str)) {
    result += (*str - '0') * fraction;
    fraction *= 0.1;
    str++;
  }

  return result * sign;
}

void printFloat(const float *number) {
  printf("The float number is: %f\n", *number);
}

int main() {
  char input[50];
  float number;

  printf("Enter a float number as string: ");
  scanf("%s", input);

  number = strtofloat(input);
  printFloat(&number);

  return 0;
}