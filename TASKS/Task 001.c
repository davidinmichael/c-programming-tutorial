/* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

use printf
*/

#include <stdio.h>

int main(void)
{
	char letter = 'a';
	for (letter = 'a'; letter <= 'z'; letter++)
	{
		if (letter != 'q' && letter != 'e')
		{
			printf("%c", letter);
		}
	}
	printf("\n");
	return 0;
}
