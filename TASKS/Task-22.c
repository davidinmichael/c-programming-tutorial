#include <stdio.h>

/*
Create a program that declares a pointer to an integer, assigns an
address to it, and outputs the value stored at the memory address
pointed by the pointer.
*/

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int a;
	a = 5;
	int *b;
	b = &a;

	printf("The value stored at a is: %d\n", *b);
	printf("The address of a is:: %p\n", b);

	return (0);
}
