#include <stdio.h>

/*
Write a function to check if a number is even or odd
*/

/**
 * checks_even_odd - checks if a number is even or odd
 * @num: number to be tested
 * Return: void
 */

void checks_even_odd(int num)
{
	if (num % 2 == 0)
		printf("%d is an even number\n", num);
	else
		printf("%d is an odd number\n", num);
}

/**
 * main - tests the function
 *
 * Return: 0
 */

int main(void)
{
	checks_even_odd(345);
	checks_even_odd(346);

	return (0);
}
