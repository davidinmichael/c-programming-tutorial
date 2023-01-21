#include <stdio.h>
/*
 Write a program in C to find the square of any number
using the function.
*/

/**
 * main - test function
 * print_square - program to find the square of a given number
 * Return: 0
 */

int print_square(int num)
{
	printf("%d\n", num * num);
}

int main(void)
{
	print_square(5);
	print_square(-100);

	return (0);
}
