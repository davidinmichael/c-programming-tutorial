#include <stdio.h>

/*
Create a program that demonstrates the use of pointers to pass
information between functions.
*/

/**
 * main - tests code
 * pass_info: passes info btw functions
 *
 *Return: 0
 */

 int pass_info(int *a, int *b)
 {
	 return(*a + *b);
 }

int main(void)
{
	int a = 10;
	int *ptA = &a;
	int b = 20;
	int *ptB = &b;
	int c = pass_info(ptA, ptB);

	printf("The sum of %d and %d is: %d\n", *ptA, *ptB, c);

	return (0);
}
