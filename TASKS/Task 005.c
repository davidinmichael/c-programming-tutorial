/*
 Write a program in C to find the square of any number
using the function.
*/

/**
 * square - prints square of a number
 * @num: number to square
 * Return: square
 */
#include <stdio.h>
int square(int num)
{
	return (num * num);
}
/**
 * main - checks code
 * @num: number
 * Return: zero
 */
int main()
{
	int num;

	num = 2;
	printf("square of %d is %d\n", num, square(num));

	return (0);
}

