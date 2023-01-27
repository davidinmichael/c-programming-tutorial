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
#include <string.h>

int factor_Number(int n)
{

    if (n==1)
    {
        return 1;
    }
    else
    {
        return n*(factor_Number(n-1));
    }
}


int main ()
{
    int n=6;


        printf("%d ",factor_Number(n));

    return 0;
}
