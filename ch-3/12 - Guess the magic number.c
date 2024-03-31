#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int magic = rand();
    int guess;
    char ans = 'y';
    do {
        printf("\nEnter your guess : ");
        scanf("%i", &guess);
        if(guess == magic) {
            printf("*** RIGHT *** \n %i is the magic number!", guess);
            ans = 'n';
        } else {
            if(guess > magic) {
                printf("*** WRONG *** \n Your guess is too high!");
            } else {
                printf("*** WRONG *** \n Your guess is too low!");
            }
            printf("\nYou want to continue ? (y/n): ");
            ans = getche();
        }
    } while ( ans == 'y');
    return 0;
}
