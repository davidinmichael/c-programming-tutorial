/*
 Write a program in C to find the square of any number
using the function.
*/

#include <stdio.h>

int main(void)
{
	int number, square;
	
	printf("Input a number: ");
	scanf("%d", &number);

	square = number*number;

	printf("Square of %d is: %d\n", number, square);
	return 0;
}
