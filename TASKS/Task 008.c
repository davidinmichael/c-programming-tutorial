/*
write your solution after the comment
Write a function that prints the alphabet, in lowercase,
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
	p = 'a';

	while (p <= 'z')
	{
		putchar(p);
		p++;
	}
	putchar('\n');
}
