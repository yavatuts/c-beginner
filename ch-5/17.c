#include <stdio.h>

void separate(char exp[], char oper[], int opnd[]);

int main() {
  char expr[21], oper[21];
  int opnd[21];
  printf("Enter expression: ");
  gets(expr);
  separate(expr, oper, opnd);
  return 0;
}

void separate(char expr[], char oper[], int opnd[]) {
  int i, j=0, k=0;
  for(i=0; expr[i]; i++)
    if(expr[i] >= '0' && expr[i] <= '9') {
      opnd[j] = expr[i] - 48;
      j++;
    } else {
      oper[k] = expr[i];
      k++;
    }
  oper[k] = '\0';
  puts("Operators are: ");
  puts(oper);
  puts("Operands are: ");
  for(i=0; i<j; i++)
    printf("%2d", opnd[i]);
}
