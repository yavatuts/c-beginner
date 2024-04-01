#include "stdio.h"

void ginput(int[], int);
int lsearch(int[], int, int);

int main() {
  const int k = 5;
  int st[k], no;
  ginput(st, k);
  printf("Enter a student # to search: ");
  scanf("%d", &no);
  if(lsearch(st, k, no) == -1)
    printf("\nNumber %d not exist in list", no);
  else
    printf("\nNumber %d exist in list", no);
  return 0;
}

void ginput(int st[], int len){
  for(int i=0; i<len; i++) {
    printf("Enter student number %d: ", i+1);
    scanf("%d", &st[i]);
  }
}

int lsearch(int st[], int len, int no){
  for(int i=0; i<len; i++)
    if(st[i] == no)
      return i;
  return -1;
}
