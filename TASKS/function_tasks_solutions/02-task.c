#include <stdio.h>

/*
 Write a function to find the largest of two numbers
*/

/**
 * largest - finds the largest of two numbers
 * @num1: first number
 * @num2: second number
 * Return: void
 */

void largest(int num1, int num2)
{
	if (num1 == num2)
	{
		printf("%d and %d are equal\n", num1, num2);
	}
	else if (num1 > num2)
	{
		printf("%d is greater than %d\n", num1, num2);
	}
	else
	{
		printf("%d is greater than %d\n", num2, num1);
	}
}

/**
 * main - tests the function
 *
 * Return: 0
 */

int main(void)
{
	largest(50, 90);
	largest(1000, 1000);
	largest(890, 675);

	return (0);
}
