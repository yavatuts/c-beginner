#include <stdio.h>

void upper(char []);

int main () {
  char s[21];
  printf("Enter a string : ");
  gets(s);
  upper(s);
  puts("Result is : ");
  puts(s);
  return 0;
}

void upper(char s[]) {
  for(int i=0; s[i]; i++) {
    if(s[i] >= 'a' && s[i] <= 'z')
      s[i] -= 32;
  }
}
