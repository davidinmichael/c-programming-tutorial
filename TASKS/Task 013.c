#include <stdio.h>

/*Write your solution after the comment
Write a function that prints all natural numbers from n to 100,
followed by a new line.
That is n is your argument, it should print from any number
passed as argument till 100.
*/

/**
 * main - tests code
 * nat_num - prints all natural numbers from n - 100
 * Return: 0
 */

void nat_num(int n)
{
	if (n >= 0)
	{
		for (; n <= 100; n++)
			printf("%d ", n);
	}
	else
		printf("You did not enter a positive number");
	printf("\n\n");
}

int main(void)
{
	nat_num(1);
	nat_num(0);
	nat_num(51);
	nat_num(-10);

	return (0);
}
