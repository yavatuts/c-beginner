#include <stdio.h>

int main() {
  char t[]="abcdefghijklmnopqrstuvwxyz";
  char temp;
  int i, length;
  for(length=0; t[length]; length++);
  length--;
  puts("The initial text is: ");
  puts(t);
  for(i=0; i<length/2; i++) {
    temp = t[i];
    t[i] = t[length-i];
    t[length-i] = temp;
  }
  puts("The reversed text is: ");
  puts(t);
  return 0;
}
