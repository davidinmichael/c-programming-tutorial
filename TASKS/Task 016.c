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

int recFunc(int n)
{

    if (n == 1)
    {
        return n;
    }
    else
    {
        return n * recFunc(n-1);
    
    }
    
}

int main()
{
    int num, sum;
    printf("Enter a number\n");
    scanf("%d", &num);
    sum = recFunc(num),
    
    printf("%d", sum);
}
