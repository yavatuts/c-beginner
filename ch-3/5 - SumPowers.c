#include <stdio.h>
#include <conio.h>

int main()
{
    int sum=0, num;
    do {
        scanf("%i", &num);
        sum += num*num;
    } while (num > 0);
    printf("Sum : %i", sum);
    return 0;
}
