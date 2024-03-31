#include <stdio.h>

int main()
{
    float sum = 0;
    for(int i=1; i<10; i++) {
        float fact = 1;
        for(int j=1; j<=i; j++) {
            fact *= j;
        }
        sum += 1/fact;
    }
    printf("Sum : %.10f", sum);
}
