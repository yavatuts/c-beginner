#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    for(int i=1; i<=6; i++) {
        for(int j=1; j<=i; j++) {
            printf("* ");
        }
        printf("\n");
    }
}
