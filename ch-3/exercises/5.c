#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n1=0, n2=1, n3=1, count=0;
    printf("Enter count : ");
    scanf("%i", &count);
    printf("%i ", n3);
    for(int i=1; i<count; i++) {
        n3 = n1+n2;
        n1 = n2;
        n2 = n3;
        printf("%i ", n3);
    }
}
