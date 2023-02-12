#include <stdio.h>

/*Write your solution after the comment
Write a function that prints 10 times the numbers, from 0 to 14,
followed by a new line.
Your output should look like this;
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
...up to 10 times
*/

/**
 * main - tests the function
 * ten_times - prints 1 - 14 ten times
 * Return: 0
 */

void ten_times()
{
	int count;
	int num;

	for (count = 0; count <= 10; count++)
	{
		for (num = 0; num <= 14; num++)
		{
			printf("%d ", num);
		}
		printf("\n");
	}
}

int main(void)
{
	ten_times();
	return (0);
}
