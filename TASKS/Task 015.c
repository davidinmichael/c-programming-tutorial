#include <stdio.h>

/*Write your solution after the comment
Fizz-Buzz - Write a program that prints the numbers
from 1 to 100, followed by a new line. But for multiples
of three print Fizz instead of the number and for the
multiples of five print Buzz. For numbers which are
multiples of both three and five print FizzBuzz.
Your output should like this;
1 2 fizz 4 buzz fizz 7 8 fizz... and so on.
*/

/**
 * main - tests the code
 * fizz_buzz - as stated above
 * Return: 0
 */

void fizz_buzz()
{
	int a;

	for (a = 0; a <= 100; a++)
	{
		if ((a % 3 == 0) && (a % 5 == 0))
			printf("FizzBuzz ");
		else if (a % 3 == 0)
			printf("Fizz ");
		else if (a % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", a);
	}
	printf("\n");
}

int main(void)
{
	fizz_buzz();
	return (0);
}
