#include <stdio.h>
#include <conio.h>

int main()
{
    while(1) {
        int num;
        scanf("%i", &num);
        while(num != 0) {
            printf("%i", num%10);
            num /= 10;
        }
        printf("\n");
    }
    return 0;
}
