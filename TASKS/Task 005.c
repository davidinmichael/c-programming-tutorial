/*
 Write a program in C to find the square of any number
using the function.
*/

#include <stdio.h>

unsigned int sq(int s);
unsigned int sq(int s)
{
	unsigned si;

	si = s * s;
	printf("%d\n", si);
		return (si);
}

int main(void)
{
	int a;

	a = 16;
	sq(a);
	sq(3);
	sq(144);

	return (0);
}
