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

/**
 * main - Test the function
 * factorial: returns product of all integers from 1 to n
 * Return: 0
 */

 int factorial(int n)
{

	if (n <= 1)
	{
		return (1); //base case
	}
	else
	{
		return (n * factorial(n - 1));
	}
}

int main()
{
	int x = factorial(6);

	printf("%d\n", x);

	return (0);
}
