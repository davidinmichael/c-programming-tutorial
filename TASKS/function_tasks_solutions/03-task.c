#include <stdio.h>

/*
Write a function to find the factorial of a number
*/

/**
 * factorial - Calculates the factorial of a given number
 * @n: number whose factorial is to be determined
 * Return: factorial
 */

int factorial(int n)
{
	if (n <= 1)
	{
		return (1);
	}
//	if (n > 1)
	else
	{
		return (n * factorial(n - 1));
	}
}

/**
 * main - tests the function
 *
 * Return: 0;
 */

int main(void)
{
	int num = 5;
	int result = factorial(num);
	printf("The factorial of %d is %d\n", num, result);

	return (0);
}
