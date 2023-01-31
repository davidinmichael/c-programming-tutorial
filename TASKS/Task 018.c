#include <stdio.h>

/*
    Write a function that returns the value of x raised to the power of y.

    functionName(int x, int y);
*/

/**
 * main - Tests the function
 * power: returns value of x raised to the power of y
 * Return: 0
 */

int power(int x, int y)
{
	if (y != 0)
	{
		return (x * power(x, y - 1));
	}
    else
	    return (1);
}

int main()
{
	int a = power(6, 2);

	printf("%d\n", a);
	return (0);
}
