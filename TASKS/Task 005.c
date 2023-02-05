/*
 Write a program in C to find the square of any number
using the function.
*/

#include <stdio.h>

int square_number(int num);
int square_number(int num)
{
    int square;

    square = num * num;

    return (square);
}
int main()
{
    int a;
    int b;

    a = square_number(-5);
    b = square_number(6);

    printf("%d and %d", a, b);
    return (0);
}

