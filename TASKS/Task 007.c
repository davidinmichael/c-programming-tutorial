/*
write your solution after the comment
Write a function that prints the alphabet, in uppercase,
followed by a new line.
*/

/**
 * uppercase - prints alphabets in uppercase
 * @c: characters
 *
 */
#include <stdio.h>

void uppercase()
{
	char c;

	for (char c ='A'; c <= 'Z'; c++)
		printf("%c\n", c);
}

/**
 * main - checks code
 * Return: 0
 */

int main(void)
{
	uppercase();
	return (0);
}
