#include <stdio.h>
#include <conio.h>

int main()
{
    char ch;
    int charcount=0, digitcount=0;
    while( (ch = getche()) != '\r') {
        charcount++;
        if( ch >= 48 && ch <= 57) {
            digitcount++;
        }
    }
    printf("Character count : %i, Digits Count: %i", charcount, digitcount);
    return 0;
}
