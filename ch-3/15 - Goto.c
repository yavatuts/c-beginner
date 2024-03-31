#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int i = 1;
    loop:
        printf("%i", i);
        i++;
        if(i < 100)
            goto loop;
    return 0;
}
