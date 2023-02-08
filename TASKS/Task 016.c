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

int prodAll(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
            return n * prodAll(n - 1);
}

int main()
{
    int num;

    printf("Enter a number: ");

    scanf("%d", &num);

    printf("The product of integers from 1 to %d is %d", num, prodAll(num));

    return 0;
}
