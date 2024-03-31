#include "stdio.h"
#include "conio.h"

int main() {
  char a, b;
  printf("Enter a character (hidden) : ");
  a = getch(); // Not visible in output (ex: Passwords)
  printf("Enter a character");
  b = getche();
  putch(a);
  putch(b);
  return 0;
}
