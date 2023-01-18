#include <stdio.h>
/* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

use printf
*/

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int abc;

	for (abc = 'a'; abc <= 'z'; abc++)
	{
		if ((abc != 'e') && (abc != 'q'))
			printf("%c ", abc);
	}
	printf("\n");
	return (0);
}
