#include <stdio.h>

/*write your solution after the comment
Write a function that computes the absolute
value of an integer.
Understand what an absolute value is, before attempting it.
*/

/**
 * main - test the function
 * make_absolute - compute absolute valuse of an integer
 * Return: 0
 */

void make_absolute(int num)
{
	int abs;

	if (num < 0)
	{
		abs = num * -1;
		printf("The absolute value of %d is %d\n", num, abs);
	}
	else
		printf("The absolute value of %d is %d\n", num, num);
}

int main(void)
{
	make_absolute(98);
	make_absolute(-57);
	make_absolute(0);
	make_absolute(-7);

	return (0);
}
