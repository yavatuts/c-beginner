#include <stdio.h>
#include <string.h>

#define MAX_SIZE 100

void check(char *a, char *b, int (*cmp)(const char *, const char *));

int main() {
  char s1[MAX_SIZE], s2[MAX_SIZE];
  int (*p)(const char *, const char *);
  p = strcmp;
  printf("enter first string : ");
  fgets(s1, MAX_SIZE, stdin);
  printf("enter second string: ");
  fgets(s2, MAX_SIZE, stdin);
  check(s1, s2, p);
  return 0;
}

void check(char *a, char *b, int (*cmp)(const char *, const char *)) {
  if (!(cmp)(a, b))
    printf("the strings are equal. \n");
  else
    printf("strings are not equal. \n");
}
