#include <stdio.h>
#include <conio.h>

int main()
{
    for(int i=41; i<=120; i++) {
        printf("%4i=%c\t", i, i);
        if(i % 5 == 0) {
                printf("\n");
        }
    }
    return 0;
}
