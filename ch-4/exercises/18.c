#include <stdio.h>

void printchar(char c, int i, int j) {
  for(int k=0; k<j; k++) {
    for(int l=0; l<i; l++) {
      printf("%c", c);
    }
    printf("\n");
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
