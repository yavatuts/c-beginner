#include <stdio.h>

int main()
{
    char s[80], y[80] ;
    char *p1, *p2;
    p1 = s;
    p2 = y;
    printf("p1 is %p, p2 is %p \n", p1, p2);
    printf("p1 points to lower address?\n");
    
    return 0;
}

