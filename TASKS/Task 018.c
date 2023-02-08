/*
    Write a function that returns the value of x raised to the power of y.

    functionName(int x, int y);
*/

#include <math.h>
#include <stdio.h>

int power(int x, int y)
{
    return pow(x, y);
}
int main()
{
        int num1 = 3;
        int num2 = 5;

        printf("%d raised to the power of %d is %d", num1, num2, power(num1, num2));
}
