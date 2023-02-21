/* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

use printf
*/

#include <stdio.h>

int main(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
	{
		if (small != 'e' && small != 'q')
			printf("%c, \n", small);
	}
	printf('\n');
	return 0;
}
