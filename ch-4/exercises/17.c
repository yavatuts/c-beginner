
#include <stdio.h>

void printchar(char c, int i, int j) {
  for(int k=0; k<i; k++) {
    printf(" ");
  }
  for(int k=i; k<j; k++) {
    printf("%c", c);
  }
}

int main() {
  char c;
  int i,j;
  printf("Enter character : ");
  c = getchar();
  printf("Enter i and j : ");
  scanf("%i%i", &i, &j);
  printchar(c, i, j);
  return 0;
}
