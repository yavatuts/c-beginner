#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int num, sum;
    char ans = 'y';
    while(ans=='y') {
        sum = 0;
        printf("\nPlease enter your number : ");
        scanf("%i", &num);
        for(int i=1; i<num; i++) {
            if(num % i == 0)
                sum+=i;
        }
        if(sum == num) {
            printf("Your number is perfect!\n");
        } else {
            printf("Your number is not perfect :\( \n");
        }
        printf("Do you want to continue ? (y/n) : ");
        ans = getche();
    }
}
