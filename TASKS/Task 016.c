/*Write your solution after the comment
    Write a recursive function that takes an integer as
    an argument and returns the product of all integers
    from 1 to that number.

    Example:
    functionName(6)

    Output:
    720         // That is 1x2x3x4x5x6 = 720
*/


#include <stdio.h>

int recursion_product(int a);

int recursion_product(int a)
{
     if (a > 1)
     {
         return (a * recursion_product(a - 1));
     }
     else
     {
         return (1);
     }
}

int main()
{
    int a = recursion_product(6);

    printf("%d", a);
    return (0);
}

