#include <stdio.h>
#include <string.h>

void bubble(char [][21], int);
int bsearch(char [][21], char [], int);

int main() {
  const int n = 5;
  int i;
  char name[21], arr[n][21];
  for(i=0; i<n; i++) {
    printf("\nEnter name %d: ", i+1);
    gets(arr[i]);
  }
  bubble(arr, n);
  printf("\nEnter one name for search: ");
  gets(name);
  if(bsearch(arr, name, n) == -1)
    printf("\nName <%s> not exist in table.", name);
  else
    printf("\nName <%s> exist in table.", name);
  return 0;
}

void bubble(char arr[5][21], int n) {
  int i, j;
  char temp[21];
  for(i=n-1; i>0; i--)
    for(j=0; j<i; j++)
      if(strcmp(arr[j], arr[j+1]) > 0) {
        strcpy(temp, arr[j]);
        strcpy(arr[j], arr[j+1]);
        strcpy(arr[j+1], temp);
      }
}

int bsearch(char arr[5][21], char name[21], int n) {
  int mid, low=0, high=n-1;
  while(low <= high) {
    mid = (low + high) / 2;
    if(strcmp(name, arr[mid]) < 0)
      high = mid - 1;
    else if(strcmp(name, arr[mid]) > 0)
      low = mid + 1;
    else
      return mid;
  }
  return -1;
}
