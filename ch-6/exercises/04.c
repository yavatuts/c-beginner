#include <stdio.h>

int main() {

    // a)
    int *num;
    printf("%d", *num);
    // Printing an uninitialized integer pointer dereference
    
    // b)
    short *numptr, result;
    void *genericptr = numptr;
    result = *genericptr + 7;
    // derefrancing a void pointer

    return 0;
}