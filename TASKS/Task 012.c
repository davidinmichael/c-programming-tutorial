#include <stdio.h>

/*Write your solution after the comment
Write a function that adds two integers and prints
the result.
*/

/**
 * main - checks code
 * sum_num - adds two integers and prints the result
 * Return: 0
 */

void sum_num(int a, int b)
{
	int add = a + b;
	printf("The sum of %d and %d is %d\n", a, b, add);
}

int main(void)
{
	sum_num(4, 5);
	sum_num(-12, -6);
	sum_num(17, -8);
	sum_num(400, 205);

	return (0);
}
