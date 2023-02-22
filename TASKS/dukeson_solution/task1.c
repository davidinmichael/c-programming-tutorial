#include <stdio.h>

/* function to find the sum of two numbers */

double sum_finder(int first, int second)
{
	return (first + second);
}

int main(void)
{
	int first = 0, second = 0;

	printf("Enter two (2) numbers separated with a space:\t");
	scanf("%i %i", &first, &second);
	printf("The sum of %d and %d = %.2f\n", first, second, sum_finder(first, second));

	return (0);
}