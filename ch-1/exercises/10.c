#include <stdio.h>
int main() {
    int a = 10;
    int b = 20;
    int max = (a > b) ? a : b;

    int c = 30;
    int max2 = (a > b) ? a : b;
        max2 = max2 > c ? max2 : c;
    return 0;
}
