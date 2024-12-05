#include "stdio.h"

int main() {
  int *zptr;
  int *aptr = NULL;
  void *sptr = NULL;
  int number, i;
  int z[5] = {1, 2, 3, 4, 5};
  sptr = z;

  // a)
  ++zptr;
  // The problem is zptr is not pointing to a valid address
  // so increasing it also is not valid and will cause seg fault

  // b)
  number = zptr;
  printf("%i", number);
  // Assigning an pointer to a integer will cause the value of number variable
  // to a memory adderss that is not usefull anywhere, example:

  // c)
  number = *zptr[2];
  // zptr is a pointer which is not initialized, but even when it is
  // initialized it shuld have a array of pointers to a pointer to index-2
  // pointer would be valid.
  // even then assigning it to a number is usefull because number
  // value would be an address of memory.

  // d)
  for (i = 0; i <= 5; i++)
    printf("%d", zptr[i]);
  // looping over a pointer that is not initialized is out of bound
  // will cause a seg falt.

  return 0;
}
