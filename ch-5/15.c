#include <stdio.h>

int eventf(char s[], char ch, char n);

int main() {
  char s[21], ch;
  int n, p;
  printf("Enter string: ");
  gets(s);
  printf("Enter the character: ");
  scanf(" %c", &ch);
  printf("Enter the event: ");
  scanf("%d", &n);
  p = eventf(s, ch, n);
  if(p == -1)
    printf("\n%dth event not found.", n);
  else
    printf("\n%dth event is in position: %d", n, p);
  return 0;
}

int eventf(char s[], char ch, char n) {
  int i, count=0;
  for(i=0; s[i]; i++) {
    if(s[i] == ch)
      count++;
    if(count == n)
      return i+1;
  }
  return -1;
}
