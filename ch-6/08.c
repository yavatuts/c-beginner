#include <stdio.h>
#define MAX_SIZE 100

int first_dif(char *, char *, int);

int main() {
  char st1[MAX_SIZE], st2[MAX_SIZE];
  int compcase = 1;

  printf("enter first string: ");
  fgets(st1, MAX_SIZE, stdin);
  printf("enter second string: ");
  fgets(st2, MAX_SIZE, stdin);
  first_dif(st1, st2, compcase);

  return 0;
}

int first_dif(char *s1, char *s2, int ignore_case) {
  int i;
  char a, b;
  for (i = 0; *s1 && *s2; s1++, s2++, i++)
    if (*s1 != *s2) {
      if (ignore_case) {
        a = (*s1 >= 'a' && *s1 <= 'z') ? *s1 -= 32 : *s1;
        b = (*s2 >= 'a' && *s2 <= 'z') ? *s2 -= 32 : *s2;
        if (a != b)
          break;
      } else
        break;
    }
  if (*s1 || *s2) {
    printf("strings are not equal. \n");
    printf("the first difference occurs at %d \n", i + 1);
  } else
    printf("strings are equal. \n");
}
