#include <stdio.h>

/*Write your solution after the comment
    Write a recursive function that takes an integer as
    an argument and returns the product of all integers
    from 1 to that number.

    Example:
    functionName(6)

    Output:
    720         // That is 1x2x3x4x5x6 = 720
*/

int mult(int);

int main() {
    int num;
    
    num = 6;
    printf("%d\n", mult(num));
    return 0;
}

/**
 * mult - function to recursively multiply a number till it is 1
 * @num - number to multiply till it is 1
 * Return: the recursive product
 */
int mult(int num)
{
    if (num == 1)
        return (num);
    if (num < 1)
        return (0);
    return ( num * mult(num -1));
}
