/*
    Write a function that returns the value of x raised to the power of y.

    functionName(int x, int y);
*/

#include <stdio.h>

int pow(int a, int b);

int pow(int a, int b)
{
        if (b > 0)
        {
            return (a * pow(a, b - 1));
        }
        else
        {
            return (1);
        }
}

int main()
{
    int a = pow(2, 5);

    printf("%d", a);
    return (0);
}
