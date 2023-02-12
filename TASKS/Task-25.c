#include <stdio.h>

/*
Declare two integer variables and swap their values using a pointer.
*/
/**
 * main - Entry point
 *
 * Return (0)
 */

void swap(int a, int b)
{
	int c = a;
	int *ptA = &a;
	int *ptB = &b;

	printf("The initial value of a was: %d\n", *ptA);
	printf("The initial value of b was: %d\n", *ptB);

	*ptA = b;
	*ptB = c;

	printf("The new value of a after the swap is: %d\n", *ptA);
	printf("The new value of b after the swap is: %d\n", *ptB);
}

int main(void)
{
	swap(5, 10);

	return (0);
}
