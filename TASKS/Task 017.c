/*
    Write a recursive function that takes an integer as
    an argument and returns the sum of all integers from
    1 to that number.

    Example
    functionName(6);

    Output:
    21      // That is; 1+2+3+4+5+6 = 21
*/


#include <stdio.h>

int recursion_sum(int a);

int recursion_sum(int a)
{
     if (a > 1)
     {
         return (a + recursion_sum(a - 1));
     }
     else
     {
         return (1);
     }
}

int main()
{
    int a = recursion_sum(6);

    printf("%d", a);
    return (0);
}
