/*write your solution after the comment
Write a function that prints the alphabet, in lowercase
followed by a new line.
*/

#include <stdio.h>

int main(void)
{
	char al;

	for (al = 'a'; al <= 'z'; al++)
	{
		putchar(al);
	}
	putchar('\n');
	return 0;
}
