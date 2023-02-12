#include <stdio.h>

/*
write your solution after the comment
Write a function that prints the alphabet, in uppercase,
followed by a new line.
*/

/**
 * main - test the program
 * print_uppercase - prints alphabet in uppercase
 * Return: 0
 */

void print_uppercase()
{
	char abc;

	for (abc = 'A'; abc <= 'Z'; abc++)
		printf("%c ", abc);
	printf("\n");
}

int main(void)
{
	print_uppercase();

	return (0);
}
