/*
write your solution after the comment
Write a function that prints the alphabet, in uppercase,
followed by a new line.
*/

#include <stdio.h>

void alp();
int main(void)
{
	alp();
	return (0);
}

void alp()
{
	int p;
	p = 65;

	while (p <= 90)
	{
		putchar(p);
		p++;
	}
	putchar('\n');
}
