/*Write your solution after the comment
Fizz-Buzz - Write a program that prints the numbers
from 1 to 100, followed by a new line. But for multiples
of three print Fizz instead of the number and for the
multiples of five print Buzz. For numbers which are
multiples of both three and five print FizzBuzz.
Your output should like this;
1 2 fizz 4 buzz fizz 7 8 fizz... and so on.
*/

#include <stdio.h>

void fizz();
int main(void)
{
	fizz();
	return (0);
}

void fizz()
{
	int a;

	for (a = 1; a <= 100; a++)
	{
		if ((a % 3) == 0 && (a % 5) == 0)
		{
			printf("fizzbuzz");
		}
		else if ((a % 3) == 0)
		{
			printf("fizz");
		}
		else if ((a % 5) == 0)
		{
			printf("buzz");
		}
		else
		printf("%d", a);
		putchar(' ');
	}
	putchar('\n');
}
