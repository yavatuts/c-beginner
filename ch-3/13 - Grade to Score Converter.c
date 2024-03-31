#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float grade;
    while(1) {
        printf("\nEnter student grade : ");
        scanf("%f", &grade);
        if(grade >= 17 && grade <= 20)
            printf("Grade: %.2f, Score: %c", grade, 'A');
        else if(grade >= 15 && grade <= 17)
            printf("Grade: %.2f, Score: %c", grade, 'B');
        else if(grade >= 12 && grade <= 15)
            printf("Grade: %.2f, Score: %c", grade, 'C');
        else if(grade <= 12 && grade >= 0)
            printf("Grade: %.2f, Score: %c", grade, 'D');
        else
            printf("Invalid grade!");

    }
    return 0;
}
