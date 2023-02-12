#include <stdio.h>

/*
Write a function to find the GCD (greatest common divisor) of two numbers
*/

/**
 * gcd - finds the GCD of two numbers
 * @num1: first number
 * @num2: second number
 * Return: 0
 */

void gcd(int num1, int num2)
{
	int a;
	int b = 1;

	for (a = 1; a <= num1 || a <= num2; a++)
	{
		if (num1 % num2 == 0)
		{
			b = num2;
		}
		if (num2 % num1 == 0)
		{
			b = num1;
		}

		if (num1 % a == 0 && num2 % a == 0)
		{
			b = a;
		}
	}
	printf("%d\n", b);
}

/*
 * main - tests the function
 *
 * Return: 0
 */

int main(void)
{
	gcd(70, 150);

	return (0);
}
