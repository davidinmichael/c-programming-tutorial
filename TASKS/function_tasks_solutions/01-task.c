#include <stdio.h>
/*
 * Write a function to find the sum of two numbers
*/

/**
 * sum - Adds two numbers
 * @num1: First number
 * @num2: Second number
 * Return: void
 */

void sum(int num1, int num2)
{
	int result = num1 + num2;
	printf("%d + %d = %d\n", num1, num2, result);
}

/**
 * main - Tests the function
 *
 * Return: 0;
 */

int main(void)
{
	sum(-10, 25);
	sum(105, 56);
	return (0);
}
