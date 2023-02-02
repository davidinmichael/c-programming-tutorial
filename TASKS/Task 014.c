/*Write your solution after the comment
Write a function that prints 10 times the numbers, from 0 to 14,
followed by a new line.
Your output should look like this;
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
0 1 2 3 4 5 6 7 8 9 10 11 12 13 14
...up to 10 times
*/
#include <stdio.h>

void printTenTimes()
{
	int n, num;

	for (n = 1; n <= 10; n++)
	{
		for (num = 0; num <= 13; num++)
		{
			printf("%d\t", num);
		}
		printf("\n");
	}
}

int main()
{
	printTenTimes();
}
