#include <stdio.h>
#include <conio.h>

int main()
{
    int count=0;
    while(getche() != '\r') {
        count++;
    }
    printf("Count of chars : %i", count);
    return 0;
}
