#include <stdio.h>

/* Write a function to find the largest of two numbers */

int get_largest(int a, int b)
{
	return ((a > b) ? a : b);	
}

int main(void)
{
	int first = 0, second = 0;

	printf("Enter two (2) numbers separated with a space:\t");
	scanf("%i %i", &first, &second);
	printf("The larger of %d and %d is %d\n", first, second, get_largest(first, second));

	return (0);
}