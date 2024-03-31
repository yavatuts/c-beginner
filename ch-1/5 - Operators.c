#include <stdio.h>

int main()
{
    // Arithmetic Operators
    int x = 2;
    int y = 5;
        x = x+x+y+2;
    int a = x++ + y;  // Add
        a = ++x - y;  // Min
        a = x * y;  // Mul
        a = x / y;  // Div
        a = x % y;  // Mod
        x++;
        x--;
        ++x;
        --x;
    int z = a+b*2/(x+2)*y;

    // Relational Operators
    bool q = a > b;
         q = a < b;
         q = a == b;
         q = a <= b;
         q = a >= b;
         q = a != b;


    // Logical Operators
    int a1 = !a;
    int a2 = a && b;
    int a3 = a || b;
    int a4 = a > b && b < y;
    int a5 = a <= b || b >= y && a > x;

    // Bitwise Operators
            // a = 11001100
            // b = 10110111;
            // j = 10000100;
    int b1 = a & b;
            // a = 11001100
            // b = 10110111;
            // j = 11111111;
    int b2 = a | b;
    int b3 = a ^ b;
    int b4 = ~a;
    int b5 = ~a & b;
    int b6 = >> a;
    int b7 = << a;


    int size = sizeof a;
    int int_size = sizeof int; // 4 (16bit = 2)
    short int ssize = sizeof short int; // 2

    int address_a = &a;
    *address_a = 10;




    return 0;
}
