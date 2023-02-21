/*
 Write a program in C to find the square of any number
using the function.
*/

#include <stdio.h>

int squareNum(int num)
{
	return (num * num);
}

int main()
{
	int num;
	int n;

	printf("Input a whole number: "\n);
	scanf("%d", &num);

	n = squareNum(num);
	printf("The square of %d is: %d", num, n);

	printf('\n');
	return 0;
}
