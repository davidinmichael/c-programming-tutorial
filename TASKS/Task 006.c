/*
Write a program in C to check a given number is even
or odd using the function.
*/
#include <stdio.h>

/**
 * checker - checks for even or odd number
 * @num: number to check
 * Return: 1 for odd number, 0 for even number
 */

int checker(int num)
{
	if (num % 2 == 0)
		return (0);
	else if (num % 2 == 1)
		return (1);
}

/**
 * main - checks code
 * Return: 0
 */
int main(void)
{
	int num;
	printf("Enter a number: \n");
	scanf("%d", &num);

	int result = checker(num);
	if (result == 0)
		printf("%d is even\n", num);
	else
		printf("%d is odd\n", num);

	return (0);
}
