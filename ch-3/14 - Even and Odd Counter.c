#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num, n=0, odds=0;
    while(1) {
        printf("\nPlease enter a number : ");
        scanf("%i", &num);
        if(num == 0)
            break;
        else if(num % 2 != 0) {
            odds++;
        }
        n++;
    }
    printf("Evens Count: %i, Odds count : %i", n-odds, odds);
    return 0;
}
