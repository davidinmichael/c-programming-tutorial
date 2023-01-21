#include <stdio.h>

/*write your solution after the comment
Write a function that prints the alphabet, in lowercase
followed by a new line.
*/

/**
 * main - test the function
 * print_lowercase - prints alphabets in lowercase followed by new line
 * Return: 0;
 */

void print_lowercase()
{
	char abc;

	for (abc = 'a'; abc <= 'z'; abc++)
		printf("%c ", abc);
	printf("\n");
}

int main(void)
{
	print_lowercase();

	return (0);
}
