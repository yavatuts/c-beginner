#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int n1, n2, div=0, n1o;
    printf("Enter num 1 : ");
    scanf("%i", &n1);
    printf("Enter num 2 : ");
    scanf("%i", &n2);
    n1o = n1;
    for(int i=0; i<n1o; i++) {
        n1 -= n2;
        div++;
        if(n1 < n2)
            break;
    }
    printf("%i/%i = %i", n1o, n2, div);

}
