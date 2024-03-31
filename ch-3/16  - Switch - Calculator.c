#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    float num1, num2;
    char op;
    printf("Enter num1, num2 : ");
    scanf("%f %f", &num1, &num2);
    printf("Enter operator : ");
    op = getche();
    switch(op) {
        case '+':
            printf("\nSum=%.2f", num1+num2);
            break;
        case '-':
            printf("\nSub=%.2f", num1-num2);
            break;
        case '/':
        case '\\':
            printf("\nDiv=%.2f", num1/num2);
            break;
        case '*':
            printf("\nMul=%.2f", num1*num2);
            break;
        default:
            printf("Invalid Operator");
    }
    return 0;
}
