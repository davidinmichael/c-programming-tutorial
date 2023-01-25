/* Write your program after the comment
Write a program that prints the alphabet in lowercase, followed by a new line.

Print all the letters except q and e

use printf
*/

#include <stdio.h>

int main(void)
{
	char alp;

	for (alp = 'a'; alp <= 'z'; alp++)
	{
		if (alp == 'e' || alp == 'q')
		{
			continue;
		}
		printf("%c", alp);
	}
	printf("\n");
	return (0);
}
