#include <stdio.h>

/*
    Write a recursive function that takes an integer as
    an argument and returns the sum of all integers from
    1 to that number.

    Example
    functionName(6);

    Output:
    21      // That is; 1+2+3+4+5+6 = 21
*/

/**
 * main - Check the function
 * sum: sums all integers from 1 to n
 * Return: 0
 */

int sum(int n)
{
	if (n < 1)
		return (0); //base case
	else
	{
		return (n + sum(n - 1));
	}
}

int main()
{
	int x = sum(6);

	printf("%d\n", x);
	return (0);
}
